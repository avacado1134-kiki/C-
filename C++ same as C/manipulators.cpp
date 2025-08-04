#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
            // Manipulators in C++
    int a = 9, b = 7, c = 9;
    cout << "The value of a with setw is: " <<setw(4)<< a << endl;
    cout << "The value of b with setw is: " <<setw(4)<< b << endl;
    cout << "The value of c with setw is: " <<setw(4)<< c << endl;

    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;





    return 0;
}