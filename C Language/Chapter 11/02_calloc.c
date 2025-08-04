// syntax
// ptr(float*)calloc(30,sizeof (float));
// //allocates contiguous space in memory for 30 blocks(floats)


//make array of size n by using calloc
#include <stdio.h>

int main(){
    int n;
    int*ptr;
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));//n=kitne chahiye i.e kitni ki array and sizeof(int)-->kya chahiye
    ptr[0] = 3;
    ptr[1] = 9;
    printf("%d and %d", ptr[0],ptr[1]);
    return 0;
}