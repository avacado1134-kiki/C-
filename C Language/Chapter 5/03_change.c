#include <stdio.h>
int change(int a)
{           // a mein b nhi gaya b ki sirf value gyi i.e b ki copy toh usse b mein kuch change nhi aayega
    a = 99; // MINSOMER kuch bhi kar lo b ki value change nhi hogi
    // printf("value of a is %d\n",a); //this prints a=99
    return a;
}

int main()
{
    {
        int b = 22;
        change(b);
        printf("The value of b is %d\n", b);
        int a = 90;
        change(a); // not even in this a will change,, a will be 90 only
        printf("The value of a is %d", a);  //a=90
    }
//change function ko b ki ek copy paas hoti h
    return 0;
}