#include <stdio.h>
//º∆À„f(n)=1 - 1/2 + 1/3 - 1/4 +......(+/-) 1/n 

int main()
{
	int n;
	double sum=0.0;
	int i;
	double sign=1.0;

	scanf("%d", &n);

	for( i=1; i<=n; i++ )
	{
		sum = sum + sign/i;
		sign = -sign;
	}
	printf("f(%d)=%f", n, sum);
	return 0;
}
