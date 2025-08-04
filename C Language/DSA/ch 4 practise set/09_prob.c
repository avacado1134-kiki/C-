//repeat question 8 using while loop

#include <stdio.h>

int main(){
    int prod=1;
    int n=8;
    int i=1;
    while (i<=n)
    {
        /* code */
        prod*=i;
        i++;
        
        printf("%d and %d\n",prod,i);
    }
    printf("the factorial is:%d",prod);
    
    return 0;
}