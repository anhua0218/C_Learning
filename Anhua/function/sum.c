#include <stdio.h>

int sum(int begin, int end)
{
	int i;
	int sum=0;
	for (i=begin; i<=end; i++){
		sum+=i;
	}
	//printf("sum=%d\t\t", sum);
	return sum;
}

int main()
{
	int a,b;
	sum(0,10);
	a = sum(20,30);
	printf("%d\t", a);
	b = sum(25,sum(28,30));
	printf("%d\n", b);
	return 0;
}
