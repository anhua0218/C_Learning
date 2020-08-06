#include <stdio.h>
//正整数逆序输出：先分解每一位，再逆序 
int main()
{
	int a;
	scanf ("%d", &a);
	int digit;
	int ret=0;
	
	while(a>0){
		
		digit = a%10;
		ret = ret*10 + digit;
		//printf("%d", digit);
		a = a/10;
	}
	printf("%d", ret);
	return 0;
}
