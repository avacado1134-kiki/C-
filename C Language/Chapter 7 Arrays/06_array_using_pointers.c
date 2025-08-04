#include <stdio.h>

int main()
{
    int marks[] = {12, 34, 56, 78};
    int *ptr = &marks[0];
    // int *ptr = marks; // Same as  int *ptr = &marks[0]; i.e ARRAY KE PEHLE ELEMENT KA ADDRESS WHN PAHUNCH JAYEGA
    //  Yeh dono baat ek hi hai
    for (int i = 0; i < 4; i++)
    {
       // printf("The marks at index %d is %d\n", i, marks[i]);
                                            // OR
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++; //har ek baari iteration + hote jayenga i.e index bhadte jayenge
    }
    return 0;
}