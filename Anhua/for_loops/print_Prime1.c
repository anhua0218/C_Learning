#include <stdio.h>
//������û��1��ֻ�ܱ��������1����
//���100���ڵ�����
int main()
{
	int a;
	//scanf("%d", &a);
	
//	if ( a == 1 ){
//		isPrime=0;
//	}
	for( a=2; a<100; a++ ) {
		int i;
		int isPrime=1;  //a������
		for( i=2; i<a; i++ ) {
			if ( a%i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1){
			printf("%d ", a);
		}
	}
	printf("\n");
	return 0;
}
