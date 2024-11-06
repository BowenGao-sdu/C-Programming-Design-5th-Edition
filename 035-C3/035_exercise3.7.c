#include<stdio.h>
#include<math.h>
int main()
{
	double r,h,pi;
	double c,s1,s2,v1,v2;
	printf("请输入圆半径r=");
	scanf("%lf",&r);
	printf("请输入圆柱高h=");
	scanf("%lf",&h);
	pi=3.141592654;
	c=2.00*pi*r;
	s1=pi*r*r;
	s2=4.00*pi*r*r;
	v1=pi*r*r*r*4.00/3.00;
	v2=s1*h;
	printf("圆周长=%.2f\n圆面积=%.2f\n圆球表面积=%.2f\n圆球体积=%.2f\n圆柱体积=%.2f\n",c,s1,s2,v1,v2);
	return 0; 
}
