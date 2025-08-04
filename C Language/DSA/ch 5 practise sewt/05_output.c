#include <stdio.h>

int main(){
    int a=4;
    printf("%d %d %d \n",a,++a,a++); //6,6,4 if the evaluation process is from right to left
    return 0;                        //4,5,5 if the evaluation process is from left to right
}