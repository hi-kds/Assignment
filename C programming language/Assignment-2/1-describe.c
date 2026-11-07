#include<stdio.h>
int main()
{   
    // if
    double x;
    double y;
    scanf("%lf",&x);
    if (x > -5 && x < 0)
    {
        y=x;
    }
    if (x >= 0 && x < 5)
    {
        y=x-1;
    }
    if (x >= 5 && x < 10)
    {
        y=x+1;
    }
    if (x <=-5 || x >= 10)
    {
        printf("N/A\n");
        return 0;
    }
    printf("y=%.2f\n",y);

    // if嵌套
    printf("solution 2\n");
    scanf("%lf",&x);
    if (x > -5 && x < 0)
    {
        y=x;
    }
    else
    {
        if (x >=0 && x <5)
        {
            y=x-1;
        }
        else
        {
            if (x >=5 && x <10)
            {
                y=x+1;
            }
            else
            {
                printf("N/A\n");
                return 0;
            }
            
        }
        
    }

    printf("y=%.2f\n",y);

    // if-else
    printf("solution 3\n");
    scanf("%lf",&x);
    if (x <= -5 || x >= 10)
    {
        printf("N/A\n");
        return 0;
    }
    else if (x < 0)
    {
        y = x;
    }
    else if (x < 5)
    {
        y = x - 1;
    }
    else
    {
        y = x + 1;
    }
    printf("y=%.2f\n",y);

    // switch
    printf("solution 4\n");
    scanf("%lf",&x);
    int tem=(x+5)/5;
    switch (tem)
    {
    case 0:
        y=x;
        break;
    case 1:
        y=x-1;
        break;
    case 2:
        y=x+1;
        break;
    default:
        printf("N/A\n");
        break;
    }
    
    printf("y=%f\n", y);
    return 0;
}