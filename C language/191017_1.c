/* 정수를 입력받아서 num1~num2까지 5와 11의 공배수는 FizzBuzz
   5의 배수는 Fizz 11의 배수는 Buzz가 나오게 함.
   */


#include<stdio.h>

int main() {
	int i;
	int num1;
	int num2;

	printf("첫번째 정수를 입력하세요!!\n");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요!!\n");
	scanf("%d", &num2);
		
		for (i = num1; i <= num2; i++) {

			if (i % 5 == 0 && i % 11 == 0) {
				printf("FizzBuzz\n");

			}
			else if (i % 5 == 0) {
				printf("Fizz\n");

			}
			else if (i % 11 == 0) {
				printf("Buzz\n");
			}
			else
			{
				printf("%d\n", i);
			}

		}
	
		return 0;	

}