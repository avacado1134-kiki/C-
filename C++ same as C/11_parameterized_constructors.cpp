#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // declaring the constructor
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};
complex :: complex(int x, int y)//This is parametrized constructor as it accepts 2 parameters
{
    a = x;
    b = y;
}


int main()
{ // Implicit call
    complex c1(4, 6);
    c1.printNumber();

    // Explicit call
    complex c2 = complex(5, 7);
    c2.printNumber();

    return 0;
}