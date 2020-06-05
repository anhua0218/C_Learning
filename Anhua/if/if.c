#include <stdio.h>

/*计算时间差*/
int main(){
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);//输入时2的时间必须比1快 
  
	int ih=hour2-hour1;
	int im=minute2-minute1;

	//减法借位思想，从高位借了1小时，高位减1，而低位得到了60分钟
	if(im<0){
		ih--;
		im=im+60;
	}

	printf("时间差是%d时%d分", ih, im); 

	return 0;
}
