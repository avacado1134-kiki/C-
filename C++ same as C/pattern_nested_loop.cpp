#include <iostream>
using namespace std;
int main()

//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     for (int j = 0; j < n; j++)//j=0,,j=1,,j=2
//     {

//         for (int i = 0; i < n; i++)//execute till n=2...
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// //if n=3
// // output=***
// //        ***
// //        ***

// {
//     int n = 4;
//     int nst = 1;
//     for (int i = 0; i < n; i++)//no. of rows
//     {
//         for (int j = 0; j < nst; j++)
//         {
//             cout << "*";
//         }
//         nst++;
//         cout << endl;
//     }//    *
//         // **
//         // ***
//         // ****
// }

// {
//     int n = 4;
//     int count = 1;
//     int nst = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < nst; j++)
//         {
//             cout << count;
//             count++;
//         }
//         nst++;
//         cout << endl;
//     }
//  }
// 1
// 23
// 456
// 78910

// {
//     int n;
//     cout << "Enter The Value of n" << endl;
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << "Incorrect Input" << endl;
//     }
//     else
//     {
//         int nst = 1;
//         int nsp = n / 2; // if n=5 then n/2=2
//         for (int i = 0; i < n; i++)//for rows
//         {
//             for (int j = 0; j < nsp; j++)
//             {
//                 cout << "   " ;
//             }
//             for (int k = 0; k < nst; k++)
//             {
//                 cout << " @ ";
//             }
//             if (i < n / 2)
//             {
//                 nst=nst+2;
//                 nsp--;
//             }
//             // else if(i>=n/2)  OR
//             else
//             {
//                 nst=nst-2;
//                 nsp++;
//             }
//             cout << endl;
//         }
//     }
// }



{
    int n = 7;
    int nst = (n / 2) + 1;
    int nsp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nst; j++)
        {
            cout << " * ";
        }
        for (int k = 0; k < nsp; k++)
        {
            cout << "   ";
        }
        for (int l = 0; l < nst; l++)
        {
            cout << " * ";
        }
        if (i < n / 2)
        {
            nsp = nsp + 2;
            nst--;
        }
        else
        {
            nsp = nsp - 2;
            nst++;
        }
        cout<<endl;
    }
}


//conclusion
// 1>rows ka loop
// 2>first line ko print karne wala loops by analyzing the pattern
// 3> baaki lines ko print karne wale saare conditions by analyzing the pattern