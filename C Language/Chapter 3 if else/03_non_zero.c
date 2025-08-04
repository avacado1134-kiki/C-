#include <stdio.h>

int main(){
    
    if(1){
        printf("This if is executed!\n");
    }
    if(2345){
        printf("This if is also executed!\n");
    }
    if(0){
        printf("I am zero I am not executed\n");
        // as the only false statement is declared by 0 rest all are executed as true statements
    }
    if(-9){
        printf("even negetive numbers dont care");
    }
    return 0;
}