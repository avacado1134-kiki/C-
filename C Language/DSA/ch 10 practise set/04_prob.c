//take a name and salary of two employees as input from the user and write them to a text file in the following format
// 1> Name1,3300
// 2> Name2,7700

#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[30] , name2[30];
    int sal1 , sal2;
    ptr=fopen("salary.txt","w");
    
    printf("Enter the name of the employee 1 \n");
    scanf("%s",name1);

    printf("Enter salary 1 \n");
    scanf("%d",&sal1);

    printf("Enter the name of the employee 2 \n");
    scanf("%s",name2);

    printf("Enter salary 2 \n");
    scanf("%d",&sal2);

    fprintf(ptr, "%s",name1);
    fprintf(ptr, "%s",",");
    fprintf(ptr, "%d",sal1);
    fprintf(ptr, "%c",'\n');
    fprintf(ptr, "%s",name2);
    fprintf(ptr, "%s",",");
    fprintf(ptr, "%d",sal2);
    fprintf(ptr, "%c",'\n');
    
    return 0;
}