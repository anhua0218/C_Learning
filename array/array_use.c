#include <stdio.h>
//注释中的写法会报错
 
int main()
{
	const int number=3;
//	int count[number]={0};
	int count[3]={0};
	int i; 
	for ( i=0; i<number; i++){
		printf("%d:%d\t", i, count[i]);
	}
	return 0;
}
