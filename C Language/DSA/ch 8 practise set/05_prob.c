//wap to encrypt the string by adding 1 to the ascii value of its characters

#include <stdio.h>
#include <string.h>

int main(){
    char s[]="Mere pizza ka last slice room mein hai";//encrypt hone ke baad pata hi nhi chalega ki actual line ya password kya tha
    for (int i=0;i<strlen(s);i++){
        s[i]=s[i]+1;//ascii value +1 ho jayegi
    }
    printf("%s",s);
    return 0;
}