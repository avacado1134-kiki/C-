#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i is %d\n", i);//5

    i = i + 5; // 10
    printf("the value of i is %d\n", i);//10
   // printf("the value of i is %d\n", ++i);//11 as i ki value abhi 10 hai usme increment ke baad 11 hogi na

    printf("the value of i is %d\n", i++);//10
    printf("the value of i is %d\n", i);//11
    printf("the value of i is %d\n", ++i);//12 as i ki value update hogyi as 11
    //compound assignment operator is given below
    i+=2;//same as i=i+2
    printf("the value of i is %d\n", i);//12+2=14

    //can be +=3 or 4 or 5 etc...
    // i++ first prints i then increments i by 1(POST INCREMENT OPERATOR)
    //++i increments i first by 1 and then prints i (PRE INCREMENT OPERATOR)
    // i-- first prints i then decrements i by 1(POST DECREMENT OPERATOR)
    //--i decrements i first by 1 and then prints i (PRE DECREMENT OPERATOR)
    
    
    return 0;
}