#include <stdio.h>

int main(){
    int i=10;
    int j=i; //declare j and initialise with i

    int a=2,b=4,c=5,d=8; //declare and initialise previously defined variables

    /* int a;
    float b;
    both statesments invalid if we have already assigned value of these two*/


    printf("the value of i is %d and j is %d\n",i,j);
    printf("the value of a is %d and b is %d\n",a,b);
    printf("the value of c is %d and d is %d",c,d);

    int j1=a+j+2; //valid hai
    //float b=a+5;
    //float a=0.1;
    // both statesments invalid:we cant assign several times the values of a and b as they are already defined
    //valid:assignung the same value to multiple variables
    int w,x,y,z;
    w=x=y=z=30;
    printf("This is w,x,y,z %d,%d,%d,%d",w,x,y,z);
    
    return 0;
}