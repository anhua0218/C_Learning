#include <stdio.h>

/*
�ҳ�key�������е�λ��
@param key ҪѰ�ҵ�����
@param a ҪѰ�ҵ�����
@param length ����a�ĳ���
@return ����ҵ�����������a�е�λ�ã�����Ҳ���������-1
*/


int search(int key, int a[], int length);
int main(void)
{
	int a[]={20,50,46,23,46,15,46,28,19,6};
	int x;
	int loc;
	printf("������һ�����֣�");
	scanf("%d", &x);
	loc=search(x, a, sizeof(a)/sizeof(a[0]));
	if(loc != -1){
		printf("%d��%dλ����", x, loc);
	} else {
		printf("%d�Ҳ���", x);
	}
	return 0;
}

int search(int key, int a[], int length)
{
	int i;
	int ret=-1;
	for (i=0; i<length; i++){
		if (a[i] == key){
			ret=i;
			break;
		}
	}
	return ret;
}
