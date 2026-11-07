#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double m; // 中间变量，由大到小排序
    if(a<b){m=a;a=b;b=m;}
    if(a<c){m=a;a=c;c=m;}
    if(b<c){m=b;b=c;c=m;}

    if (a > 0 && b > 0 && c > 0 && b + c > a)
    {
        if (a==b && b==c)
        {
            printf("等边三角形\n");
        }
       else if (b*b+c*c==a*a)
            {
                if (b==c)
                {
                    printf("等腰直角三角形\n");
                }   
            else printf("直角不等腰三角形\n");
            }
        else if (a==b || b==c){printf("等腰三角形\n");}
        else printf("一般三角形\n");
    }
    else printf("无法构成三角形\n");
    return 0;
}