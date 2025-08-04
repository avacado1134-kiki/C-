#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex); // declaration//sirf declare karen and define isko complex class define karne ke baad karen
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
//indivisually declaring function as friends
    // ek class ke function ko dusre class ka friend banaya
    // friend int calculator ::sumRealComplex(complex, complex); // agar yeh nhi daalta toh yeh access nhi kar pata private members of calculator
    // friend int calculator ::sumCompComplex(complex,complex);
    // complex khud hi keh rha hai written mein ki thk hai tm calculator mera private data access kar lo

    //Aliter: Declaring the entire calculator class as friend
    friend class calculator;//poori class calculator hi hamari frnd ban gyi


public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(5, 7);
    calculator calc;
    int res1= calc.sumRealComplex(o1, o2);
    cout << "The sum of the real part of o1 and o2 is " << res1 << endl;

    int res2 = calc.sumCompComplex(o1, o2);
    cout << "The sum of the imaginary part of o1 and o2 is " << res2 << endl;
    return 0;
}