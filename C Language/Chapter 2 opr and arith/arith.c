#include <stdio.h>

int main()
{
    int a = 3;
    int b = 2;
    printf(" The sum a + b = %d\n", a + b);
    printf("The remainder when a is divided by b: %d\n", a % b);
    //modulus operator is used to get the remainder
    int y=-9;
    int z=8;
    printf("The remainder when y is divided by z: %d\n", y % z);
    //output aata hai pehle usually jaisa 9 divided by 8 karo phir jo remainder aayega usme numerator ka sign put kar do

    //this does not work for exponentiation in c
    //int d=a^b; as in c (^) is used for different purpose
    //for exponential we use pow in <math.h>

   /* An arithmatic operation btw always gives
   int and int->int
   int and float->float
   float and float->float*/
   printf("for first case example %d\n",a/b);
   float s=5.0;
   int f=2;
   int p=5;
   printf("for second case example%f\n",s/f);
   printf("for divide case example which gives quioent %d\n",f/p);
   int j=9.8;
   printf("the demotion is %d\n",j);

   //for int=3.5; the float 3.5 is demoted to 3
   //conversly for float=8; the int will be 8.0 for the execution







    return 0;



}



