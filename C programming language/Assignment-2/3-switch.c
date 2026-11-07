#include<stdio.h>
int main()
{
    int x,y;
    int tem;
    scanf("%d",&x);
    tem=(x>=20)+(x>=30)+(x>=40)+(x>=50)+(x>=60);
    switch (tem)
    {
    case 0: y=1; break;
    case 1: y=2; break;
    case 2: y=3; break;
    case 3: y=4; break;
    case 4: y=5; break;
    default: y=6; break;
    }
    printf("x=%d,y=%d\n",x,y);
    return 0;
}