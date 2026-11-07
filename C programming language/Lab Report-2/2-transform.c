#include<stdio.h>
int main()
{
    int hour,minute;
    int w;
    scanf("%d %d",&hour,&minute);
    w=(hour*60+minute);
    printf("%d\n",w);
    return 0;
}