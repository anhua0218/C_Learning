#include <stdio.h>

/*����ʱ���*/
int main(){
	int hour1, minute1;
	int hour2, minute2;

	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);//����ʱ2��ʱ������1�� 
  
	int ih=hour2-hour1;
	int im=minute2-minute1;

	//������λ˼�룬�Ӹ�λ����1Сʱ����λ��1������λ�õ���60����
	if(im<0){
		ih--;
		im=im+60;
	}

	printf("ʱ�����%dʱ%d��", ih, im); 

	return 0;
}
