#include <stdio.h>
//����Խ����ʲ�δ�������⣬һ��Ҫ���� 
void f();

int main()
{
	f();
	printf("here\n");
	return 0;
}

void f()
{
	int a[10];
	a[99] = 0;
}
