#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	double x1,x2,delta;
	printf("����ax^2+bx+c=0\n");
	printf("������a��\n");
	scanf("%lf",&a);
	printf("������b��\n");
	scanf("%lf",&b);
	printf("������c��\n");
	scanf("%lf",&c);
	delta=b*b-(4*a*c);
	if (delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("\n���������ȵ�ʵ��%f %f\n",x1,x2); 
	}
	else if (delta==0)
	{
		x1=(-b)/(2*a);
		printf("\n��������ȵ�ʵ��%f\n",x1);
	}
	else
	{
		printf("\n�޽⣡\n");
	} 
	return 0;
}
