#include <stdio.h>
//计算输入所有数的平均数，输入-1即结束输入数据
int main()
{
	int number;
	int sum=0;
	int count=0;
	scanf("%d", &number);
	while (number != -1){
		sum=sum+number;
		count=count+1;
		scanf("%d", &number);
	}
	printf("%f", 1.0*sum/count);
	return 0;
}
