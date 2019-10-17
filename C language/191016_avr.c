/* 문제 5번
프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 
다음 두 가지 조건을 만족시켜야 한다.
 - "먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 
    그리고 그 수만큼 정수를 입력 받는다."
 - "평균 값은 소수점 이하까지 계산해서 출력한다."

 ***for문을 이용하였음
*/
#include <stdio.h>

int main()

{
	int i = 0;   
	int count; //정수 입력 받는 수 (몇번 입력받을 것인지...)
	int num1; //정수값
	float sum = 0; //합계
	float avr = 0; // 평균값

	printf(" 정수의 평균값 구하기!! \n");
	printf(" 몇개의 정수값을 입력 받을 것입니까? \n");
	scanf("%d", &count);
	printf(" %d개의 정수값을 입력 받겠습니다. \n",count);


	for (i = 1; i <= count; i++) {
		printf(" 정수값을 입력 해 주세요. \n");
		scanf("%d", &num1);
		sum = sum + num1;
		
	}
	printf("입력받은 수의 합계는 %.1f 입니다.!!\n", sum); //소수점 1자리까지 출력 (%.1f)
	avr = (float)sum / count; // 강제적인 형 변환으로 평균 계산
	printf("입력받은 수의 평균은 : %.1f 입니다.!!\n", avr); // 소수점 1자리까지 평균 출력



	return 0;
}

