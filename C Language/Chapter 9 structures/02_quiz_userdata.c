#include <stdio.h>
#include <string.h>
struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
};
int main()
{
    struct employee e1, e2;
    // e1.name="Kiki"; //we cant direct use equal to here.
    // Ya toh pehle hi declare karne ke waqt hi = karte likh dete but baad mein karoge toh string.h ko include karke strcpy() use karna hoga
    printf("Enter the value of code\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary\n");
    scanf("%f", &e1.salary);

    printf("Enter the name \n");
    scanf("%s", &e1.name);

    printf("Enter the value of code\n");
    scanf("%d", &e2.code);

    printf("Enter the value of salary\n");
    scanf("%f", &e2.salary);

    printf("Enter the name \n");
    scanf("%s", &e2.name);

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);

    return 0;
}

//for fast coding change all occurences for e2 and e3 but in a new file by using ctrl+N then copy and paste here