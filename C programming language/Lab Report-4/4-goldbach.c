#include<stdio.h>
int main()
{
    int w,m,q;
    int i;
    int j=1;// 判断器
    for ( w = 3; w <= 50; w++)
    {
        for ( m = 2; m <= w; m++)
        {
            q = w*2-m;
            j=1;
            for ( i = 2; i*i <= m; i++)
            {
                if(m%i==0){j=0; break;}
            }
            if(j==1)
            {
                for ( i = 2; i*i <= q; i++)
                {
                    if(q%i==0){j=0; break;}
                }
            }
            if(j==1)
            {
                printf("%d+%d=%d\n", m, q, w*2);
                break;
            }
        }
    }
    return 0;
}