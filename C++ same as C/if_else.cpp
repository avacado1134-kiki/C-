#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You Are Eligible to Vote";
    }
    // else if (age > 60)//if this is used and the entered age meets the requirements of (if) then it will not go in (if else )
    if (age >= 60) // now it will go in yeh wala if jabki pehla wla abhi ho rha meet lekin yeh genuine meet ho rha
    {
        cout << "You Are a senior Citizen and can Vote";
    }
    else if (age > 150 || age < 1)
    {
        cout << "Invalid Age!!";
    }
    else
    {
        cout << "You Cannot Vote";
    }
    return 0;
}