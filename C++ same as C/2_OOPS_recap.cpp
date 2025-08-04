//                      SUMMARY!!
// OOPs - clsses and objects

// C++ --->initially called -->C with classes by strousstroup
// class -->extention of structures in C
// structures had limitations
//  -members are public
//  -no methods
// classes can have methods and properties
// classes-->can make few members as private and few as public
// structures in C++ are typedefed
// kiki.salary=9087; does not make sense if salary is private

// Nesting of members functions

#include <iostream>
#include <string>
using namespace std;
class binary // by default class ke members private hote hai
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void binary ::read(void) // read binary
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void) // check binary
{
    for (int i = 0; i < s.length(); i++)
    {
        // cout << i;
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Binary format Incorrect!!" << endl;
            exit(0); // program se exit le le agar ek bhi non binary digit mil jaye use
        }
    } // only 1 and 0 is binary number rest kuch bhi hua it will check and print incorrect
}
void binary ::ones(void)
{
    chk_bin();//nesting kar diye yani ki ya toh function ke andar function bana liye ya toh ek function ke andar dusre ko call kar diye
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;    // binary number banauga
    b.read();    // read karunga binary number
   // b.chk_bin(); // check karunga ki yeh binary number hai ki nhi
    b.display(); // display karega binary number
    b.ones();    // binary number 1 ko 0 aur 0 ko one bana dega
    b.display(); // display karega changed binary number
    return 0;
}
