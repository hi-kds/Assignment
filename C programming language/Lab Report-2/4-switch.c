#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b,b=a-b,a=a-b;
    printf("a=%d,b=%d\n",a,b);
    printf("Solution 2\n");
    scanf("%d %d",&a,&b);
    a=a^b,b=a^b,a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}