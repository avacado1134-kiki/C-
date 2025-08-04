#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // Creating a constuctor
    // Constructor ek special member function hota hai.
    // With same name as of the class used to initailise the objects of its class.
    // constructor automatically run hojata hai jaise hi aap object banate hai.i.e.it is automatically invoked.
    // It is used to initialize the objects of its class

    complex(void); // declaration constructor
    void printNumber()//function 
    {
        cout << "Your number is " << a << " +  " << b << "i" << endl;
    }
};
complex ::complex(void)//--->this is a default constructor as it takes no parameters
//define kiye h
{//sambhav ho paya kyunki jo yeh function ka naam tha woh class ke naam se same tha
    //i.e constructor :banaya ja rha hai object ko uski value ko set kiya ja rha h
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printNumber();//function call
    return 0;
}

//Characteristics of constructors
/*
1. It should be declared in the public section of the class.
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments
5. We cannot refer to their address
6.It has no data type
 */