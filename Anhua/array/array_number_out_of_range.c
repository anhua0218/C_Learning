#include <stdio.h>
//数组越界访问并未出现问题，一定要避免 
void f();

int main()
{
	f();
	printf("here\n");
	return 0;
}

void f()
{
	int a[10];
	a[99] = 0;
}
