﻿#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node()
    {
        this->data = data;
    }
};
class OneLinkedList
{
public:
    Node* head, *tail;
    OneLinkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    ~OneLinkedList()
    {

    }
    void push_front(int data)
    {
        Node* node = new Node(data);
        node->next = head;
        head = node;
        //if (tail == NULL) tail = node;
    }
    void push_back(int data)
    {
        Node* node = new Node(data);
        if (head == NULL) head = node;
        if (tail != NULL) tail->next = node;
        tail = node;
    }
};
int main()
{
    setlocale(0, "ru");
   
}

