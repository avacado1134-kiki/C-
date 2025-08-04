#include <iostream>
using namespace std;
class complex
{// by default private hota hai class mein sab jab tak usse specifically public na kar de
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;//1
        b = v2;//2
    }

    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;//1 and 3
        b = o1.b + o2.b;//2 and 4
        //naye complex no. ke b ko b ke bararbar kar de rhe hai
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << "+" << b<<"i" << endl;
    }
} ;


int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();
    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);//added c1 nad c2
    c3.printNumber();
    return 0;
}
