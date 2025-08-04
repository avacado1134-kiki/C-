#include <iostream>
using namespace std;
int main()
{
     cout << "Hello KIKI"; // for manually compilation if coderunner nhi chala as coderunner apne hi compilation kar leta hai:
    /*PS C:\Users\aakri\Downloads\CODING\C++> g++ kiki.cpp
    PS C:\Users\aakri\Downloads\CODING\C++> .\a.exe
Hello KIKI
for every changes write manually "g++ kiki.cpp"*/

    cout << "Hello KIKI" << endl  //<< is called insertion operator
         << "Next Line" << endl;
    //"<<" we can write several line by single cout command
    //  short,int,long datatypes
    // int a, b, c;
    short sa = 9;
    cout << sa << endl;
    // rules of variable declaring
    /* variables are case sensitive and dont start with numbers baad mein aa sakta hai no issues
     short Sa=9;variables are case sensitive
    short _sa = 9;  variables can be started with underscore*/

    // camelCase Notation
    int marksInMaths = 90;
    cout << "The Marks of This student is " << marksInMaths << endl;

    short a;
    int b;
    long c;
    long long d;
    float const score = 90.89f; // score constant ho gya u cant re assign
   // 67.9f;//if we dont write f then by default it will be double and not float.By adding f the number becomes float type
    double score2 = 390.19;    // u can reassign this
    long double score3 = 0.89l;
    cout << "The Score is " << score << endl;
    printf("The score is %.2f\n", score);
    // cout is type-safe, automatically detecting the data type of the variable to be printed. printf, on the other hand, requires format specifiers (e.g., %d for integers, %f for floats) to indicate the data type.

    int x, y;
    cout << "Enter first number" << endl;
    cin >> x;// >> is called extraction operator
    cout << "Enter second number" << endl;
    cin >> y;
    cout << "The x+y is" << x + y << endl;
    cout << "The x-y is" << x - y << endl;
    cout << "The x*y is" << x * y << endl;
    cout << "The x/y is" << (float)x / y << endl; // typecast kar de kisi ek ko as float aur int ke beech mein koi operation hoga toh uska output float hi aayega



// & gives address of element
// * is a dereference operator
    return 0;
}


                //RESERVED KEYWORDS IN C++

/*alignas       continue      friend         register       true
alignof       decltype      goto           reinterpret_cast try
asm           default       if             return         typedef
auto          delete        inline         short          typeid
bool          do            int            signed         typename
break         double        long           sizeof         union
case          dynamic_cast  mutable        static         unsigned
catch         else          namespace      static_assert  using
char          enum          new            static_cast    virtual
char16_t      explicit      noexcept       struct         void
char32_t      export        nullptr        switch         volatile
class         extern        operator       template       wchar_t
const         false         private        this           while
constexpr     float         protected      thread_local
const_cast    for           public        throw */
