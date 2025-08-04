//write a progra to calc the factorial of a given no. using for loop

#include <stdio.h>

int main(){
    int prod=1;
    int n=0
    ;
    for(int i=1;i<=n;i++){
        prod*=i;
        printf("%d%\n",prod);
    }
    //agar n=0 kiye toh jayega hi nhi loop mein and prod=1 print ho jayega jo initialy given tha
    printf("the factorial is:%d",prod);
    return 0;
}