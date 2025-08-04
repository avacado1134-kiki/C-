#include <stdio.h>

int main()
{
            //POINTER ARITHMATIC USING INTEGER POINTER

    // int a = 98;
    // int *i = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", i);
    // i++;  //jitna bhi bytes yeh pointer iss architecture mein le rha hai yeh utna times yeh increment ho jayega
    //     //eg. integer agr 4 bytes le rha hai toh 4 increase ho jayega
    //  iska yeh mtlb nhi hai ki woh 4 kadam aage badh gya woh ek hi kadam badha hai bas uska aage chalne ka paer 4 byyes liye h ek kadam mein.Do kadam mein 8 bytes
    // printf("The value of i is %u\n", i);


            //POINTER ARITHMATIC USING CHARACTER POINTER

    char a = 'A';
    char *i = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", i);
    i++;  //jitna bhi bytes yeh pointer iss architecture mein le rha hai yeh utna times yeh increment ho jayega
        //eg. character 1 byte le rha hai toh 1 se increase ho jayega
    printf("The value of i is %u\n", i);
    return 0;
}