#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	double x1,x2,delta;
	printf("计算ax^2+bx+c=0\n");
	printf("请输入a：\n");
	scanf("%lf",&a);
	printf("请输入b：\n");
	scanf("%lf",&b);
	printf("请输入c：\n");
	scanf("%lf",&c);
	delta=b*b-(4*a*c);
	if (delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\n有两个不等的实根%f %f\n",x1,x2); 
	}
	else if (delta==0)
	{
		x1=(-b)/(2*a);
		printf("\n有两个相等的实根%f\n",x1);
	}
	else
	{
		printf("\n无解！\n");
	} 
	return 0;
}
