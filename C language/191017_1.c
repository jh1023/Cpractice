/* ������ �Է¹޾Ƽ� num1~num2���� 5�� 11�� ������� FizzBuzz
   5�� ����� Fizz 11�� ����� Buzz�� ������ ��.
   */


#include<stdio.h>

int main() {
	int i;
	int num1;
	int num2;

	printf("ù��° ������ �Է��ϼ���!!\n");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���!!\n");
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