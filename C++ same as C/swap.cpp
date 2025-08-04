// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << "The value of a is " << a << " and the value of b is " << b << endl;
//     return;
// }
// int main()
// {
//     int a = 90;
//     int b = 20;
//     cout << "The value of a is " << a << " and the value of b is " << b << endl;
//     swap(a, b);
//     cout << "The value of a is " << a << " and the value of b is " << b << endl; // as copy gyi hai a nad b ki toh yeh 90 and 20 hi print karega jab tak adress se cher chaar nhi ki jaye

//     return 0;
// }
// OR

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //cout << "The value of a is " << *a << " and the value of b is " << *b << endl;
    //return;
}
int main()
{
    int a = 90;
    int b = 20;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl; // yahan address gyi hai toh swapping perfectly hogi

    return 0;
}
