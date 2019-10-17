#include <stdio.h>

int main()
{
	int dan;
	int i;
	
	for (dan = 2; dan < 10; dan++)  //2단 부터 시작해서 9단까지
	{
		printf(" <<%d 단>> \n", dan);

		for (i = 1; i < 10; i++)     //n x 1부터 시작해서 nx 9까지
		{
			printf(" %d * %d = %02d\n ", dan, i, dan * i);  // 구구단 출력
		}
	}
		
	printf("\n");

	return 0;
}