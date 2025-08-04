#include <iostream>
using namespace std;
class bank
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
     bank() {};//we need a default constructor for class bank nhi toh bd1,bd2,bd3 execute hi nhi hoga
    //ham yeh isiliye banate hai taaki agar ham p,y and r ki value nhi bhi de paye tab bhi hamra constructor taiyaar ho jaye
    bank(int p, int y, float r); // r can be 0.08
    bank(int p, int y, int r);   // r can be 80
    void show(void);
};
bank ::bank(int p, int y, float r) // r yahan pe percent ke hisaab se lega
{
    principal = p;
    years = y;
    interestRate = r; // typecast kar diye rate of interest ko taaki value floating point number aaye na ki int ham apna precision maintain karna chahate hai
    returnValue = principal;
    for (int i = 0; i < y; i++) // i chalega no. of years tak
    {
        returnValue = returnValue * (1 + interestRate); // if r=0.04 then jo principal value ke 100 rupay hai woh multiply ho jayenge  1.04 se aur aapke paas 104 rupay ho jauenge
        // phir jo agla saal chalega woh aapke 104 rupay ke hisaab se chalega
    }
}

bank ::bank(int p, int y, int R) // r yahan pe percent ke hissaab se lega
{
    principal = p;
    years = y;
    interestRate = float(R) / 100; // typecast kar diye rate of interest ko taaki value floating point number aaye na ki int ham apna precision maintain karna chahate hai
    returnValue = principal;
    for (int i = 0; i < y; i++) // i chalega no. of years tak
    {
        returnValue = returnValue * (1 + interestRate); // if r=0.04 then jo principal value ke 100 rupay hai woh multiply ho jayenge  1.04 se aur aapke paas 104 rupay ho jauenge
        // phir jo agla saal chalega woh aapke 104 rupay ke hisaab se chalega
    }
}
void bank ::show()
{
    cout << "principal amount was " << principal << " Return value after " << years << "yrs " << "is " << returnValue << endl;
}

int main()
{
      bank bd1, bd2, bd3;//if we do not initialise then used or wala method
    int p, y;
    float r; // decimal form mein h
    int R;   // percentage form mein h
    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bank(p, y, r);
    bd1.show();

    cout << "Enter the value of p,y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bank(p, y, R);
    bd2.show();

                                         // OR
                                         //pehle blank objects ban rhe phir use ham overwrite kar rhe agar dono chiz chala rhe
        
    int p, y;
    float r; // decimal form mein h
    int R;   // percentage form mein h
    cout << "Enter the value of p,y and r" << endl;
    cin >> p >> y >> r;
    bank bd1 = bank(p, y, r);//bank ek data type ban gya hai
    bd1.show();
    return 0;
}
