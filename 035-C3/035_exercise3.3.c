#include<stdio.h>
#include<math.h>
int main()
{
	double m,p,q,d,r;
	d=300000;
	p=6000;
	r=0.01;
	m=(log(p)-log(p-d*r))/log(1+r);
	printf("%.1f月能还清\n",m);
	return 0;
}
