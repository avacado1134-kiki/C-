#include <iostream>
using namespace std;
class emp
{
    int id;
    static int count; // static sirf ek hi variable ho sakta hai and aur use saare objects share karte hai
    //  static int count=1000;//syntax error de dega
public:
    void setData(void)
    {
        cout << "Enter the Id of the employee ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << id << " and this is employee's number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
       // cout<<id;//error throw kar diya as id is not a static variable
    } // static function isiliye banate hai taaki woh sirf aur sirf saare static variables ko hi access kar paaye
    // static function ko sirf class ke naam se hi run ho jaye usse kisi object ki zaryrat naah pade run hone ke liye
};

int emp ::count; // default value is 0
// int emp :: count=1000;//if wanna initialise from 1000 u can change static variable here
int main()
{
    emp harry, kiki, lily, sissy;
    // count is the static member function of the class emp
    //  kiki.id = 1;
    //  kiki.count = 1; //cannot do this as id and count are private
    harry.setData();
    harry.getData();
    emp ::getCount();//jo static function hote hai unhe sirf woh saare static variables ka hi access hota hai

    kiki.setData();
    kiki.getData();
    emp ::getCount();

    lily.setData();
    lily.getData();
    emp ::getCount();

    sissy.setData();
    sissy.getData();
    emp ::getCount();
    return 0;
}
