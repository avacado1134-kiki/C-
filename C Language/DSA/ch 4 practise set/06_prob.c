// USING DO WHILE LOOP THE PROBLEM 5

#include <stdio.h>

int main()
{
    int i=1;
    int sum = 0;
    do
    {
        sum += i;
        i++;

    } while (i <= 10);
    printf("the sum is %d:\n",sum);

    return 0;
}

// USING FOR LOOP FOR QUESTION 5

#include <stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=i;

    }
    printf("the sum is %d:",sum);
    return 0;
}