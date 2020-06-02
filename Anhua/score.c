#include <stdio.h>

//判断分数是否合格 
int main()
{
	const int pass=60;
	int score;
	
	printf("请输入你的分数：");
	scanf("%d", &score);
	
	if (score<pass){ 
		printf("你的成绩不及格！\n");
		printf("必须努力了\n"); 
	}else{
		printf("恭喜你！成绩合格\n");
		printf("继续加油\n");
	}	
	printf("再见！\n"); 
	return 0;	  
}
