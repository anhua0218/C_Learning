#include <stdio.h>
//ע���е�д���ᱨ��
 
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
