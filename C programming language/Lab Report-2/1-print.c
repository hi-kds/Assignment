#include<stdio.h>
int main()
{
    int a=5,b=7;
    double x=31.19;
    printf("a=%3d,b=%3d,a-b=%d,a/b=%3d%%\n", a, b, a - b, (int)((double)a / b * 100));
    printf("c1=%s,C2=%-6.4s,C3=%6.4s\n","COMPUTER", "COMPUTER", "COMPUTER");
    printf("x1=%.2f, x2=%6.1f, x3=%.4f\n", x, x, x);
    printf("x4=%.5e, x5=%13.2e\n", x * 10, -x);
    return 0;
}