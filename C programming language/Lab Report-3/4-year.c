#include<stdio.h>
int main()
{
    int year,month;
    int w;
    scanf("%d %d",&year,&month);
    if(month>12 || month<1 || year<1) {printf("N/A\n");return 0;}
    w=((year %4==0 && year %100 !=0) ||year %400==0);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31天\n");
        break;
    case 2:
        if (w==1) printf("29天\n");
        else printf("28天\n");
        break;
        
    default:
        printf("30天\n");
        break;
    }
    return 0;
}