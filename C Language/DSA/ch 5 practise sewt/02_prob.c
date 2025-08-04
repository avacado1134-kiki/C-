#include <stdio.h>
float temp(float);
float temp(float c)
{
    return ((9 * c) / 5.0) + 32;
}
int main()
{
    float c = 27;
    printf("Degree to fahrenheit for %f is %.2f ",c, temp(c));

    return 0;
}