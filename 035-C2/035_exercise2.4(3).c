#include <stdio.h>
int main()
{
	int a,b,c,Max,Median,Min;
	printf("������a��\n");
	scanf("%d",&a);
	printf("������b��\n");
	scanf("%d",&b);
	printf("������c��\n");
	scanf("%d",&c);
	Max=a;
	if (a<b)Max=b;
	if (Max<c)Max=c;
	Median=b;
	if (c>a&&b>c)Median=c;
	if (c>b&&a>c)Median=c;
	if (c>a&&a>b)Median=a;
	if (b>a&&a>c)Median=a;
	Min=c;
	if (a<c)Min=a;
	if (b<Min)Min=b;
	printf("���Ӵ�С˳�����У�%d,%d,%d",Max,Median,Min);
	return 0;
}
