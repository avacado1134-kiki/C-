// modify the program to check whether file exists or not before opening the file
// agar exist nhi karega toh yeh null return karega
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki90.txt", "r"); // read mode
    if (ptr == NULL)
    {
        printf("The file does not exist,SORRY!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num); // 12

        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num);
    }
    fclose(ptr);
    return 0;
}