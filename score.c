#include <stdio.h>

//�жϷ����Ƿ�ϸ� 
int main()
{
	const int pass=60;
	int score;
	
	printf("��������ķ�����");
	scanf("%d", &score);
	
	if (score<pass){ 
		printf("��ĳɼ�������\n");
		printf("����Ŭ����\n"); 
	}else{
		printf("��ϲ�㣡�ɼ��ϸ�\n");
		printf("��������\n");
	}	
	printf("�ټ���\n"); 
	return 0;	  
}
