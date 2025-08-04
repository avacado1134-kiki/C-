#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name="kiki";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(0,3)<<endl;//0 se start karke 3 character tak jayega
    cout<<"The name is "<<name.substr(1,344)<<endl;// 1 se last tak dega

}