// wap to open a file in write mode

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("kiki.txt", "w"); // write mode pehle pure file ko khali kar de rha uske baad usme likhega
    //ek chiz gaur karo ki isko run karne pe yeh pehle puri file ko khali kar de rha phir jo run kiye hai sirf wahi rehne de rha file mein
    int num = 868;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}