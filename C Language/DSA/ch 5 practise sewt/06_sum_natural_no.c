#include <stdio.h>
int sum_natural(int);
int sum_natural(int n)
{
    if (n==1){
        return 1;
    }
    // sum(n)=1+2+3+4+...+n-1+n;
    // sum(n)=sum(n-1) + n
    
    return sum_natural(n-1)+n;
}

int main()
{int  n=9;
    printf("The sum of n natural number is %d",sum_natural(n));


    return 0;
}