#include<stdio.h>
int main()
{
    int year,month,day; //基准一年为365天，每月30天
    int RAW;
    int tem,res;
    int select;
    int w,m,q; // w年份平衡器，m为月份平衡器，q为2月天数平衡器
    int n=0; //合法校验
    RAW=11;
    scanf("%d %d %d",&year,&month,&day);

    q=(year %4==0 && year %100!=0 || year %400==0); //前置判断

    //校验
    if (year <2024 || month <1 || month >12 || day <1) n=1;

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
     month == 8 || month == 10 || month == 12)
    {
        if (day >31) n=1;
    }
    else
    {
        if (month==2)
        {
            if (q==0 && day >28) n=1;
            else if (day >29) n=1;
        }
        else if (day >30) n=1;
        
    }
    
    if (n==1)
    {
        printf("N/A\n");
        return 0;
    }

    w=0;
    if(year>2024) w=(year-2023)/4+1-(year/100-20);//考虑被100整除的平年

    if (month <=8) m=month/2;
    if (month >8) m=(month+1)/2;

    if (month>2) {if (q==0) q=2;} //输出转化
    else q=0;
    
    tem=(year-2024)*365+(month-1)*30+day+w+m-q;
    res=tem-RAW;
    if (res<0)
    {
        printf("N/A\n");
        return 0;
    }
    
    select=res%7;
    switch (select)
    {
        case 1: printf("学习政治\n"); break;
        case 2: printf("学习英语\n"); break;
        case 3: printf("学习高数\n"); break;
        case 4:
        case 5: printf("学习C语言\n"); break;
        case 6: printf("运动\n"); break;
        case 0: printf("休息\n"); break;
    }
    return 0;
}