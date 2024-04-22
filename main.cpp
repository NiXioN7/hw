#include <iostream>
#include <string>
using namespace std;
int main() {  
    setlocale(0, "ru");
    string str = "129956";
    int num = 0;
    for (int i = 0; i < 6; i++)
    {
        char ch = str[i];
        num += atoi(&ch);
    }
    cout << num << endl;
    int f_side = 34;
    int s_side = 17;
    int t_side = 98;
    if ((f_side + s_side) > t_side)
    {
        if ((s_side + t_side) > f_side)
            if ((f_side + t_side) > s_side)
                cout << "Треугольник существует" << endl;
    }
    else cout << "не существует";
}
