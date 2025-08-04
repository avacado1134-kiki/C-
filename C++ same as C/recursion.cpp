#include <iostream>
using namespace std;
int factorial(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    // factorial of a number
    // 6!=6x5x4x3x2x1=720
    // 0!=1 by definition
    // 1!=1 by definition
    //  n!=n*(n-1)!
    int a;
    cout << "enter a no. " << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "Invalid Input!!" << endl;
    }
    else
    {
        cout << "The factorial of " << a << " is " << factorial(a) << endl;
    }
    return 0;
}
