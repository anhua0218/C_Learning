#include <stdio.h>
//计算机中存储的不是准确0.0045，而是最接近0.0045的数0.0044999... 
int main()
{
	printf("%.3f\n", 0.0045);
	printf("%f\n", 0.0045);
	printf("%.30f\n", 0.0045);
	printf("%.60f\n", 0.0045);
	return 0;
}
