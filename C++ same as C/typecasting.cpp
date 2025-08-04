#include <iostream>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.89;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;//integer of b
    cout << "The value of b is " << int(b) << endl;//b ko int mein convert
    int c = int(b);
    return 0;
}