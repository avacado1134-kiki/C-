
#include <stdio.h>
void change(int );
void change(int a)
{
    a = a * 10;
}

int main()
{
    int x = 45;
    change(&x);
    printf("The value of x is %d", x);
//jab aap address paas kar rhe ho toh aap value at address karke change kar sakte ho value of variable
// lekin jab aap sirf copy paas kar rhe ho kisi ek variable ki toh woh variable main function mein change nhi hota hai
    return 0;
}