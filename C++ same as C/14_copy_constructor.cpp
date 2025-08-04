#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0; // default ke liye
    }
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found, compiler supplies its own copy constructor

    number(number &obj) // isko do reference kiska khud ka apne aap ka reference do
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
    // still the output will be same but, not the statement given
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(80), z2;
    x.display();
    y.display();
    z.display();
    number z1(x); // copy constructor invoked
    // z1 ke a ko assign hogyi value kya jo bhi maine paas ki hai value obj ki so,hamne x paas kiye hai uska value 0 hai as nothing aasigned toh default value li hai
    // so z1 ki a ki value bhi wahi ho gyi jo x ke a ke barabar
    // z1 should exactly resembles x or y or z
    z1.display();
    z2 = x;       // copy constructor not called
    z2.display(); // o/p:80 only but its not becoz of the copy constructor is invoked

    number z3 = z; // copy constructor invoked
    z3.display();
    return 0;
}