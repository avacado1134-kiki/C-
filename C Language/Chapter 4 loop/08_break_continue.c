// any loop terminates by break
//iteration skips by continue
#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            //break;//exit the loop i.e terminates loop
            continue;//exit this iteration just for now i.e iteration terminates
        }
        printf("i is %d\n", i);
    }//output 0-4
    //output 5 will not get printed
    return 0;
}