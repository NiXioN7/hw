#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int _data) :data(_data) {};
};
class TwoLinkedList
{
public:
    Node* head, *tail;
    TwoLinkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    void show_all()
    {
        Node* temp_node = head;
        int i = 1;
        cout << "All heads" << endl;
        while (temp_node)
        {
            cout << i << ": " << temp_node->data << endl;
            temp_node = temp_node->next;
            i++;
        }
    }
    /*void insert(int _next_data, int data)
    {
        Node* temp_node = head;
        bool is_found = false;
        while (temp_node)
        {
            if (temp_node->data == _next_data)
            {
                Node* node = new Node(data);
                head->next = node;
                node->prev = head;
                tail->prev = node;
                node->next = tail;
                is_found = true;
            }
            temp_node = temp_node->next;
        }
        if (is_found)
        {
            "Element is found!";
        }
        else "Element is not found!";
    }*/
    void push_back(int data)//добавляем элемент в конец списка
    {
        Node* node = new Node(data);
        if (tail != NULL)
        {
            node->prev = tail;//предыдущий элемент перед хвостом - голова
            tail->next = node;//следующий после хвоста элемент - нода
        }
        else head = node;
        tail = node;

        if (tail == NULL) tail = node;
    }
    void push_front(int data)//добавляем элемент в начало списка
    {
        Node* node = new Node(data);
        if (head != NULL)
        {
            node->next = head;//следующий элемент после ноды - голова
            head->prev = node;//предыдущий элемент перед головой - нода
        }
        else tail = node;//если головы не было, хвост становитс последним элементом
        head = node;//голова становится добавленным элементом

        if (tail == NULL) tail = node;
    }
    void show_head()
    {
        cout << "Head: " << head->data << endl;
        cout << "Head next: " << head->next->prev->data << endl;
    }
    void show_tail()
    {
        cout << "Tail: " << tail->data << endl;
        cout << "Tail next: " << tail->prev->next->data << endl;
    }
    void pop_front()
    {
        if (head == NULL) return;
        if (head == tail)
        {
            delete tail;
            head = tail = NULL;
            return;
        }
        Node* node = head;
        head = node->next;
        head->prev = NULL;
        delete node;
    }
};
int main()
{
    setlocale(0, "ru");
    TwoLinkedList list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.push_back(5);
    list.show_head();
    list.show_tail();
    list.show_all();
}

