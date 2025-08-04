#include <iostream>
using namespace std;

// keval ek type ka data use karna chahte hai toh use union
union money
{
    int rice;     // ya toh rice ki value set karke usko use karungi
    char car;     // ya car ki value set karke usko use karungi
    float pounds; // ya pounds mein set karke
}; // inn teeno mein se koi ek currency ke hisaab se use karenge
int main()
{
    union money m1;
    m1.rice = 90;
    // m1.car='c';
    cout << "The value of money is " << m1.rice << endl; // ab yeh overwrite ho jayegi toh actual value nhi degi koi garbage value degi

    enum Meal//Meal ek datatype ban gya h
    {
        bf,
        lunch,
        dnr
    };
    Meal m5 = bf;
    cout << m5 << endl;
    cout << bf << endl;    // 0
    cout << lunch << endl; // 1
    cout << dnr << endl;   // 2
    return 0;
}