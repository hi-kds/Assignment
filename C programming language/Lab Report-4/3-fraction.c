#include <stdio.h>
int main()
{
    double sum1 = 0;
    double sum2 = 0;
    double i;
    for (i = 1; i <= 50; i++)
    {
        sum1 += 1 / (i * 2 - 1);
        sum2 += 1 / (i * 2);
    }
    printf("%f\n", sum1 - sum2);
    return 0;
}