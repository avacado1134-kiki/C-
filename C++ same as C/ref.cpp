#include <iostream>
using namespace std;
// for swapping there are 2 ways either make a pointer and do so or make c++reference
// void swap_pointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void swap_reference(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

//  inline int product(int a, int b)// inline--> compile time mein hi compiler replace kar deta hai function call ko function ke code se
// {//jo baaar baar copy kar rhe the arguments ko aur return value laa rhe the uski zarurat nhi hai
//     return a * b;
// }

//  int product(int a, int b){
// Not recommended to use below lines with inline functions:
// static int c=0;//this executes only ones //isko function nhi bhulta hai baaki sab ko bhul jata hai
// c=c+1;//next time this func is run the value of c will be retained i.e c=1 then next time c=2...
//     return a*b;
// }

float moneyReceived(int currentMoney, int factor = 1.04)
{
    return currentMoney * factor;
}

// int strlen(const char *p){//length chahiye function ki yeh nhi ki tm meri function ko hi badal baitho

// }
int main()

{
    // int x = 4, y = 5;
    // cout << x << y << endl; // 45
    // // swap_pointer(&x, &y);
    // swap_reference(x, y);
    // cout << x << y << endl; // 54

    int a, b;
    cout << "Enter the value of a and b is " << endl;
    cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    int money = 100000;
    cout << "If u have" << money << "rs in u'r bank account,you will receive" << moneyReceived(money) << "rs after 1st yr";
    cout << "For VIP:If u have" << money << "rs in u'r bank account,you will receive" << moneyReceived(money,1.1) << "rs after 1st yr";
    return 0;
}