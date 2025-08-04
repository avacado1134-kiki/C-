#include <stdio.h>
 float force(int m){
    return(m*9.8);
}

int main(){
    int m=45;
    printf("The gravitational force is %.2f",force(m));

    return 0;
}