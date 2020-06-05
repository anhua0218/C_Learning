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
					printf("%d元可以由%d个1角，%d个2角和%d个5角得到\n", x, one, two, five);
					//break;  //只能跳出该层循环 
					//goto out;
				}
			}
		}
	}
//out:	
	return 0;
}
