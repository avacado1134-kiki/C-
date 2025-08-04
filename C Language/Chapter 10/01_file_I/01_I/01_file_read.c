// Reading a file by reading mode 'r'
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki.txt", "r"); // read mode
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num); // 12

    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);
    // now it will print 56 as jaise jaise aap move karte jaoge waise waise yeh file pointer aage bhadte jayega
    fclose(ptr); // its important to close the file
    return 0;
}