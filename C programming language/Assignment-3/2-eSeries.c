#include<stdio.h>
int main()
{
    double e=1.0;
    int i=1;
    double temp=1;
    do
    {
        temp *= 1.0/i;
        e += temp;
        i++;
    } while (temp >= 1e-4);
    printf("%lf\n", e);
    do
    {
        temp *= 1.0/i;
        e += temp;
        i++;
    } while (i==20);
    printf("%lf\n", e);
    return 0;
}