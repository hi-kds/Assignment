#include<stdio.h>
int main()
{
    int x;
    int a=999;
    int res;
    scanf("%d", &x);
    if(x <= 1000){printf("N/A\n");return 0;}
    do
    {
        res= x % a;
        if (res==0 && a /100 >0 && a /100 <10)
        {
            printf("%d\n", a);
            return 0;
        }
        a--;
    } while (a <= x && a > 0);
    printf("N/A\n");
    return 0;
}