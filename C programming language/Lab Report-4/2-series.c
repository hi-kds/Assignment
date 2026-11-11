#include<stdio.h>
int main()
{
    double x;
    double c=1.00;
    double a=1.00;
    scanf("%lf",&x);
    if(x <=1){printf("N/A\n"); return 0;}

    do
    {
        a /= x;
        c += a;
    } while (a > 0.000001);
    printf("%lf\n", c);
    return 0;
}