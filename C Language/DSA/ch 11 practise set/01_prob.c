//make a array to store 6 integers and display
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=6;
    int *ptr;
    ptr=(int*) malloc(n*sizeof(int));
    ptr[0]=90;
    ptr[1]=67;
    ptr[2]=46;
    ptr[3]=89;
    ptr[4]=23;
    ptr[5]=58;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    printf("%d\n",ptr[5]);
    return 0;
}