#include <stdio.h>

/*��һ����λ�����������
ע��������Ϊ800�����������8������008
*/ 

int main(){
	int data;
	printf("������һ����λ����"); 
	scanf("%d", &data);

	//data=100*a+10*b+c
	
	int a=data/100;
	int b=data/10%10;
	//int b=data%100/10;
	int c=data%10;
	
	int out_data=100*c+10*b+a;
	printf("����Ľ��Ϊ��%d", out_data);
	
	return 0;
}
