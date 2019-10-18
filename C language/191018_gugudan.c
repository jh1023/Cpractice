/*
두개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해 보자.
(3과 5를 입력하면 3단, 4단, 5단이 출력되어야 합니다.)
*/

#include<stdio.h>

void gugudan(int a, int b)
{

	if (a < b)
		for (a = 2; a < b + 1; a++)
		{
			int i = 1;
			for (i = 1; i < 10; i++)
			{
				printf("%d x %d = %d \n", a, i, a * i);
			}
			printf("\n");
		}
	else
		for (b = 2; b < a + 1; b++)
		{
			int i = 1;
			for (i = 1; i < 10; i++)
			{
				printf("%d x %d = %d \n", b, i, b * i);
			}
			printf("\n");

		}
}
int main(void)
{
	int gugu1, gugu2;
	printf("두 개의 정수를 입력하세요 : \n ");

	scanf("%d%d", &gugu1, &gugu2);
	
	gugudan(gugu1, gugu2);
	
	return 0;
}






