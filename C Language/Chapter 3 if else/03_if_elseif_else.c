#include <stdio.h>

int main(){
    int age=450;
    if(age>60){
        printf("You can drive But now u are a senior citizen");
    }
    else if(age>18){
        printf("You can drive legally");

    }
    else if(age<5){
        printf("You are a toddler");
    }
    else{
        printf("You cant drive as u are underage");
    }
    
    
    return 0;
}