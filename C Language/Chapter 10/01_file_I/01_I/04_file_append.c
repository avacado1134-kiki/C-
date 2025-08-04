// wap to open a file in append mode

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki.txt", "a"); //append mode
    //yeh append kar dega at the end of the file i.e jo likha hua h file mein usko hayetega nhi bas usme add kar dega jo usme likhne ke liye run kiye honge
    int num = 868;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}