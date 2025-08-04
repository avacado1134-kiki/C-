#include <stdio.h>
// Function prototype
int sum(int, int); // hamesha likhni chahiye acchipractise hoti h
void display(); // void mtlb yeh kuch bhi return nhi karegi ,, for returning kuch toh type do usko

//  Function definition
int sum(int x, int y) //x and y are parameters
{ // ek integer return karega and do integer input lega
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{ // main function entry point hota hai kisi bhi c program ka
    int a = 90;
    int b = 80;
    // sum(a, b); //function call
    // sum(90, 80); // or just write for no. of lines dec in the code

    int c = sum(a, b); //  function call //a and b are arguments
    // karoge toh as hamne return ki hai value of x+y so c ki value 170 ho gyi h
    printf("The value of c is %d\n", c);


    int p;
    display();
    return 0;
}
//function definition can be before or after the main 
void display(){
    printf("HI!! im KIKI \n");
}