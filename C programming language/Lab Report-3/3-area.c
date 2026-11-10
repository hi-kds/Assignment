#include<stdio.h>
#include<math.h>
int main()
{   
    int a,b,c;
    int t;
    double p,s;
    scanf("%d %d %d",&a,&b,&c);
    if(b>a) t=b,b=a,a=t;
    if(c>a) t=c,c=a,a=t;
    if(c>b) t=c,c=b,b=t;
    if(a <=0 || b <=0 || c <=0 || b+c <= a)
    {  
        printf("N/A\n");
        return 0;
    }
    p=(a+b+c)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("S=%.2f\n",s);
    return 0;
}