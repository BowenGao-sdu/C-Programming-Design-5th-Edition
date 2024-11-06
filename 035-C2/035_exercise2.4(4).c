#include <stdio.h>
int main()
{
	int sum,n;
	sum=0;
	n=1;
	while (n<=100)
	{
		sum=sum+n;
		n=n+1;
	}
	printf ("%d",sum);
	return 0;
}
