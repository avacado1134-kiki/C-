//wap to modify a file containing an integer to double its value

#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr=fopen("double.txt","r");
    fscanf(ptr, "%d",&num);
    fclose(ptr);
    
    ptr=fopen("double.txt","w");
    fprintf(ptr,"Modify to its double %d\n",2*num);
    fclose(ptr);
    return 0;
}