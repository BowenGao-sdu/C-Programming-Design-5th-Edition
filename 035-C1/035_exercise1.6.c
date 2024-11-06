#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf ("请输入a：\n");
	scanf ("%d",&a);
	printf ("请输入b：\n");
	scanf ("%d",&b);
	printf ("请输入c：\n");
	scanf ("%d",&c);
	max=a;
	if (a<b)max=b;
	if (max<c)max=c;
	printf ("最大值为%d\n",max);
	return 0;
}
