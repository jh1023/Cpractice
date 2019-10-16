#include <stdio.h>

int main()

{
	int i;
	int sum = 0; //1~100까지 합계
	int sum2 = 0; //1~100까지 짝수 합계
	int sum3 = 0; //1~100까지 홀수 합계
	
	for (i = 0; i <= 100; i++) {
		sum = sum + i;
		
	}// 1~100까지의 합 (5050)
	printf("합계 %d 입니다.\n", sum);

	for (i = 1; i <= 100; i++) {
		//i++;
		if (i % 2 == 0) {
			sum2 = sum2 + i;

		}

	}//짝수 합 (2550)
	printf("합계 %d 입니다. 짝수 합(1~100).\n", sum2);


	for (i = 0; i <=100; i++) {
		if (i % 2 == 1) {
			sum3 = sum3 + i;

		}
	}// 홀수 합 (2500)
	printf("합계 %d 입니다. 홀수 합(1~100)\n", sum3);

	
	return 0;
}
