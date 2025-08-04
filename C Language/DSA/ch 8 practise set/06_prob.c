// wap to decypt problem 6

#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Nfsf!qj{{b!lb!mbtu!tmjdf!sppn!nfjo!ibj"; // decrypt hpne ke baad pata chal jayega ki kya tha actual statement ya passcode
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = s[i] - 1; // ascii value -1 ho jayegi
    }
    printf("%s", s);
    return 0;
}