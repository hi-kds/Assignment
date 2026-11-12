#include<stdio.h>
int main()
{
    int n=1010;
    do
    {
        n += 2;
        printf("%d\n", n);
    } while (n < 9998);
   return 0; 
}