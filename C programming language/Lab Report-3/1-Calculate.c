#include<stdio.h>
int main()
{
	double x,y=0;
	int temp;
	scanf("%lf",&x);
	if(x <0 || x >=6) {printf("N/A\n"); return 0;}
	temp=x/2;
	switch (temp)
	{
		case 0:
			y=-x+2.5;
			break;
		case 1:
			y=2-1.5*(x-3)*(x-3);
			break;
		case 2:
			y=x/2-1.5;
			break;
	 } 
	 printf("y=%.2lf\n",y);
	 return 0;
}