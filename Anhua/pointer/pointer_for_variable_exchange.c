#include <stdio.h>
void exchang(int *pa,int *pb);

int main()
{
	int a=5;
	int b=6;
	exchang(&a,&b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}


void exchang(int *pa,int *pb)
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
}
