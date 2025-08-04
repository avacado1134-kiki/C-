//operator presedence
       /* PRIORITY      OPERATOR
            1st         *,%,/
            2nd           +,-
            3rd           =   
#operators of higher priority will be executed in the absence of parenthesis

OPERATOR ASSOCIATIVITY
x*y/z-(x*y)/z
x/y*z-(x/y)z

*,/ follows left to right associativity    */

//  #PRO TIP=always use parenthesis in case of confusion 
//as in c parenthesis is evaluated as usual and read by user easily what u are executing first

#include <stdio.h>

int main(){
    int a=3;
    int b=6;
    int c=9;
    printf("THe value is %d\n",a*b/c+8);
    printf("THe value is %d",3*b/2*c+7*a);
    //3*b/2*c + 7*a
    //3*b/2*c + 21
    //18/2*c + 21
    //9*c +21
    //81 + 21
    //102 Output
    //left to right associativity
    

    return 0;
}