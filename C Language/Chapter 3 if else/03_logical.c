#include <stdio.h>

int main(){
    int a=1; int b=0;
    printf("The value of a and b is %d\n",a&&b);//and
    printf("The value of a and b is %d\n",a||b);//or
    printf("The value of not(a) is %d\n",!a);//not

    
    if (a && b){
        printf("both true\n");
    }

    // is same as writing this..
    if (a){
        if(b){
            printf("both true\n");
        }  //i.e if a is true then if b is true then print both true
    return 0;

    }



}
