#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
};

int main()
{
    struct employee ig[100]; // an array of structures
    //i.e employee-iss type ki structures ka array bana dega
    // we can access the data using:
    ig[0].code = 100;
    ig[1].code = 77;
    printf("%d %d\n",ig[0].code,ig[1].code);
                    // OR can be initialised by
struct employee kiki={100,70.90,"kiki"};
struct employee aashi={77,89.90,"aashi"};
printf("%d %f %s\n",kiki.code,kiki.salary,kiki.name);
printf("%d %f %s\n",aashi.code,aashi.salary,aashi.name);
    return 0;
}