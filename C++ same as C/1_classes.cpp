#include <iostream>
#include <string>
using namespace std;
// c++ is an object and class oriented programming language
class employee
{
public:
    string name;
    int salary;
    employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of employee is " << this->name << " and the salary is " << this->salary << " dollars " << endl;
    }
    // ab main 10-15 employees ki details print kar sakte hai easily
    void getsecretPassword()
    {
        cout << "The secret password of the employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};
// public class can access private but simple commands like cout are not applicable for private

class emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // declaring before giving value
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
//::-->scope resolution operator
void emp :: setData(int a1, int b1, int c1)//:: used when pehle se dclare kiye variables ke value set karni hoti hai
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee kirti("Kiki ", 700, 1134);
    employee harry("Harry ", 450, 6359);
    //              OR
    // kirti.name="KIKI";
    // kirti.salary=1000;
    // cout<<"The name of 1st employee is "<<kirti.name<<" and the salary is "<<kirti.salary<<" dollars "<<endl;
    kirti.printDetails();
    kirti.getsecretPassword();
    harry.printDetails();
    harry.getsecretPassword();

    emp gigi;
    // gigi.a=134-->this will throw an error as (a) is private similarly b and c
    gigi.d = 90;
    gigi.e = 80;
    gigi.setData(10, 20, 30);
    gigi.getData();
}