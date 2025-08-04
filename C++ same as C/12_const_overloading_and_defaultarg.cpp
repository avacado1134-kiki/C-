#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y) // This is parametrized constructor as it accepts 2 parameters
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 4)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void simple::printData()
{
    cout << "The value of data1 and data2 and data3 is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{ // Implicit call
    complex c1(4, 6);
    c1.printNumber(); // dono ka specific values dena chahte hai
    complex c2(2);
    c2.printNumber(); // dusra chahte hai by default 0 ho jaye uske liye
    complex c3;
    c3.printNumber(); // dono ko 0 value pradan ho


    simple s(2);
    s.printData();//baaki dono b and c ko default hi le lega

    simple s1(52,94,87);//ab jo assign kiye hai usi ko lega
    s1.printData();
    return 0;
}