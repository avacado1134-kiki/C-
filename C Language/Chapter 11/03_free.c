#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int*ptr;
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));//n=kitne chahiye i.e kitni ki array and sizeof(int)-->kya chahiye
    ptr[0] = 3;
    ptr[1] = 9;
    printf("%d and %d", ptr[0],ptr[1]);
    free(ptr);//toh jo memory le rha tha na ptr woh free ho jayegi
    return 0;
}