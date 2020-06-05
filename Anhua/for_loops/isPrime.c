#include <stdio.h>
//素数（没有1）只能被它本身和1整除

int main()
{
	int a;
	scanf("%d", &a);
	int i;
	int isPrime=1;  //a是素数
	if ( a == 1 ){
		isPrime=0;
	}
	for(i=2; i<a; i++){
		if ( a%i == 0 ){
			isPrime=0;
			break;
		}
	}
	if (isPrime==1){
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}
	return 0;
}
