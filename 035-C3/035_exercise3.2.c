#include<stdio.h>
#include<math.h>
int main()
{
	double c,i1,i2,i3,i4,i5,r1,r2,r3,r5,current,p1,p2,p3,p4,p5;
	int a;
	c=1000.0000;
	r1=0.0150;
	r2=0.0210;
	r3=0.0275;
	r5=0.0300;
	current=0.0035;
	//方法1 
	p1=c*(1+5*r5);
	i1=p1-c;
	// 方法2 
	p2=c*(1+2*r2);
	p2=p2*(1+3*r3);
	i2=p2-c;
	//方法3 
	p3=c*(1+3*r3);
	p3=p3*(1+2*r2);
	i3=p3-c;
	//方法4 
	i4=c*pow((1+r1),5.0)-c;
	p4=c+i4;
	//方法5 
	i5=c*pow(1+(current/4),20.0)-c;
	p5=c+i5;
	//输出 
	printf("以下办法存：\n（1）一次存5年期。利息为%lf，本息和为%lf\n",i1,p1);
	printf("（2）先存2年期，到期后将本息再存3年期。利息为%lf，本息和为%lf\n",i2,p2);
	printf("（3）先存3年期，到期后将本息再存2年期。利息为%lf，本息和为%lf\n",i3,p3);
	printf("（4）存1年期，到期后将本息再存1年期，连续存5次。利息为%lf，本息和为%lf\n",i4,p4);
	printf("（5）存活期存款。利息为%lf，本息和为%lf\n",i5,p5);
	return 0;
} 
