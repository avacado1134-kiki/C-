// wap a program containing a function which reverses the array paased to it

#include <stdio.h>
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{

    // for i from 0 to n/2
    // arr[i]  arr[n-i-1]
    int temp;
    for (int i = 0; i < n / 2; i++)
    { // if n=odd then also koi na eg n=7 then n/2 is 3.55 but will take only int as int and int ka execution will give int i.e 3 and middle term will be toh same only na
        // ab ham swap karenge
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print_array(arr, 5);
    reverse(arr, 5);
    print_array(arr, 5);
    return 0;
}