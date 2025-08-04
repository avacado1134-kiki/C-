//'while' first check the condition then executes the code

//'do-while' first executes the code then check the condition
// i.e do-while loop = while loop which executes at least once
// mtlb woh pehle ek baari toh chalega hi chalega uske baad condition true hogi tab chalega

#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("enter no.\n");
    scanf("%d", &n);
    do
    {
        /* code */
        printf("the value of i is : %d\n", i);
        i++;
    } while (i <= n);
    return 0;
}

// this is question TO WRITE n number of natural numbers