#include <stdio.h>
//������û��1��ֻ�ܱ��������1����

int main()
{
	int a;
	scanf("%d", &a);
	int i;
	int isPrime=1;  //a������
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
		printf("������\n");
	} else {
		printf("��������\n");
	}
	return 0;
}
