#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0; // ek global variable bana diye

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num()//destructor
    {
        cout << "This is the time when my destructor is called for the object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3; // sirf n2 aur n3 ka hi block level ke andar scope h
        cout << "Exiting this block" << endl;
        // jab object banega tab constructor call hoga aur jab compiler ko lagega ki ab object ki zarurat nhi h tab destructor call hoga
    }
    cout << "Back to main " << endl;
    // iske baad destructor of n1 call kar jayega

    return 0;
}