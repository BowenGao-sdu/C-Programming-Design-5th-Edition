#include <stdio.h>
int main()
{
	int a,b,c,Max,Median,Min;
	printf("请输入a：\n");
	scanf("%d",&a);
	printf("请输入b：\n");
	scanf("%d",&b);
	printf("请输入c：\n");
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
	printf("按从大到小顺序排列：%d,%d,%d",Max,Median,Min);
	return 0;
}
