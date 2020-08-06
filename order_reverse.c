#include <stdio.h>

/*把一个三位数以逆序输出
注意若该数为800，结果必须是8，而非008
*/ 

int main(){
	int data;
	printf("请输入一个三位数："); 
	scanf("%d", &data);

	//data=100*a+10*b+c
	
	int a=data/100;
	int b=data/10%10;
	//int b=data%100/10;
	int c=data%10;
	
	int out_data=100*c+10*b+a;
	printf("逆序的结果为：%d", out_data);
	
	return 0;
}
