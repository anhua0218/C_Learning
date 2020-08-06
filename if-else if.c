#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d", &x);

	if(x<0){
		y=2;
	}else if(x<5){
		y=-x;
	}else if(x<10){
		y=x;
	}else{
		y=10;
	}
	printf("y = %d\n", y);

	return 0;
}
