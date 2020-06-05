#include <stdio.h>
//素数（没有1）只能被它本身和1整除
//输出50个素数
int main()
{
	int a=2;
	
	//scanf("%d", &a);
	
//	if ( a == 1 ){
//		isPrime=0;
//	}
	//for( a=2; a<100; a++ ) {
	int cnt=0;
	while( cnt < 50 ){
		int i;
		int isPrime=1;  //a是素数
		for( i=2; i<a; i++ ) {
			if ( a%i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1){
			printf("%d ", a);
			cnt++;
		}
		a++;
	}
	printf("\ncnt=%d", cnt);
	printf("\n");
	return 0;
}
