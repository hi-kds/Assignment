#include<stdio.h>
int main()
{
    int n;
    int w,m;
    scanf("%d", &n);
    if(n <= 0){printf("N/A");return 0;}
    for (w = 1; w <= n; w++)
    {
        for (m = 1; m <= n-w; m++)
        {
            printf(" ");
        }

        for (m = 1; m <= 2*w-1; m++)
        {
            printf("*");
        }

        for (m = 1; m <= n-w; m++)
        {
            printf(" ");
        }
        printf("\n");
    }

    for (w = n-1; w > 0; w--)
    {
        for (m = n-w; m > 0; m--)
        {
            printf(" ");
        }

        for (m = 2*w-1; m > 0; m--)
        {
            printf("*");
        }

        for (m = n-w; m > 0; m--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}