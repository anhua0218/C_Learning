#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int one, two, five;

	for( one=0; one<=x*10; one++)
	{
		for( two=0; two<=x*10/2; two++)
		{
			for( five=0; five<=x*10/5; five++)
			{
				if ( x*10 == one+two*2+five*5 )
				{
					printf("%dԪ������%d��1�ǣ�%d��2�Ǻ�%d��5�ǵõ�\n", x, one, two, five);
					//break;  //ֻ�������ò�ѭ�� 
					//goto out;
				}
			}
		}
	}
//out:	
	return 0;
}
