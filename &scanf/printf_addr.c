#include <stdio.h>

int main(void)
{
	int i;
	i=888888;
	//int p=(int)&i;
	//printf("0x%X\n", p);
	printf("0x%X\n", &i);
	printf("%p\n", &i);
	printf("%d\n", i);
	printf("%d\n", sizeof(&i));
	printf("%d\n", sizeof(i));
	return 0;
}
