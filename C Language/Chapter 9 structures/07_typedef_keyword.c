// we can use the typedef keyword to create an allias name for data type in c
// typedef ham kisi bhi datatype ke liye use kar sakte h c lang mein but mainly hamlog use karenge structure ke liye

#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];

} Emp; // ab same chiz jo struct employee e1 karte the direct ek word emp likh ke bhi ho sakta hai
int main()
{
    // typedef int kiki;//maine apna datatype bana diya
    // kiki a =88;//int bhi kaam karega and kiki bhi same kaam karega
    // printf("The value of a is %d \n ",a);
    // NOT USED IN THIS FORM MUCH BUT IN STRUCTURE

    // struct employee e1, e2;
    // typedef struct employee Emp;  aise bhi kar sakte hai
    Emp e1, e2;      // emp int ya float ki tarah ban gya hamare liye
    Emp *ptr1 = &e1; // just now write emp simple
    strcpy(e1.name, "Kiki");
    e1.salary = 54.55;
    e1.code = 001;
    strcpy(e2.name, "Harry");
    e2.salary = 60.52;
    e2.code = 002;
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);
    printf("%d %.2f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}