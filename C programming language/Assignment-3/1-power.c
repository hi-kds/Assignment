#include<stdio.h>
int main()
{
    int a,b;
    int res=1;
    int i;
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("N/A");
        return 0;
    }
    for (i = 0; i < b; i++)
    {
        res *= a;
    }
    printf("%03d", res % 1000);
    return 0;
}