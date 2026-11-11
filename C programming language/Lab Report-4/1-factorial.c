#include <stdio.h>
int main()
{
    int n, i = 0, j = 0;
    int sum = 0;
    int temp = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            temp *= j;
        }
        sum += temp;
        temp = 1;
    }
    printf("%d\n", sum);
    return 0;
}