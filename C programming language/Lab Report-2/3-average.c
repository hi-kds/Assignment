#include<stdio.h>
int main()
{
    int a,b,c;
    int m;
    scanf("%d %d %d",&a,&b,&c);
    m=(a+b+c)/3;
    printf("The average of %d、 %d and %d is %d.\n", a, b, c, m);
    return 0;
}