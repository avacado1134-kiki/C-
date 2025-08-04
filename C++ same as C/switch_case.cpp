#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 12:
        cout << "You Are 12 Years Old";
        break;
    case 18:
        cout << "You Are 18 Years Old";
        break;

    default:
        cout << "You are neither 12 nor 18";
    }

    return 0;
}