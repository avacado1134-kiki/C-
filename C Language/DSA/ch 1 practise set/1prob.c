#include <stdio.h>

int main(){
    // int length=3;
     //int breadth=6;
    int length,breadth;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("the area of this rect is %d", length*breadth);
    
    return 0;
}