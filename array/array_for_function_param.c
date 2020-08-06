#include <stdio.h>

/*
找出key在数组中的位置
@param key 要寻找的数字
@param a 要寻找的数组
@param length 数组a的长度
@return 如果找到，返回其在a中的位置；如果找不到，返回-1
*/


int search(int key, int a[], int length);
int main(void)
{
	int a[]={20,50,46,23,46,15,46,28,19,6};
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);
	loc=search(x, a, sizeof(a)/sizeof(a[0]));
	if(loc != -1){
		printf("%d在%d位置上", x, loc);
	} else {
		printf("%d找不到", x);
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
