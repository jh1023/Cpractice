#include<stdio.h>

int main() {

	int num1;
	int money = 10000;
	printf("#############################\n");
	printf("####   자판기 프로그램  ####\n");
	printf("#############################\n");
	printf("------------------------------\n");

	printf("1.콜라(700원) 2. 사이다(600원) 3.커피 4.쥬스(1000원)\n");
	
	printf("------------------------------\n");
	printf("번호를 누르세요!!\n");

	scanf("%d", &num1);

	if (num1 == 1 ) {
		printf("콜라가 나왔습니다.!!\n");
		printf("잔돈 %d원 입니다.!!\n", money - 700);
	}
	else if(num1 == 2)
	{
		printf("사이다가 나왔습니다.");
		printf("잔돈 %d원 입니다.!!\n", money - 600);

	}
	else if (num1 == 3)
	{
		int num2;

		printf("------------------------------\n");
		printf("커피 사이즈를 선택해 주세요!!\n");
		printf("1.Tall(1,500원), 2.Grande(2,000원)\n");
		printf("------------------------------\n");

		scanf("%d", &num2);
		if (num2 == 1) {
			printf("Tall사이즈 커피가 나왔습니다.\n");
			printf("잔돈 %d원 입니다.!!\n", money - 1500);


		}
		else if (num2 == 2) {
			printf("그란데 사이즈 커피가 나왔습니다.\n");
			printf("잔돈 %d원 입니다.!!\n", money - 2000);


		}

	}
	else if (num1 == 4) 
	{
		printf("쥬스가 나왔습니다.");
		printf("잔돈 %d원 입니다.!!\n", money - 1000);


	}
	



	return 0;
	
}
