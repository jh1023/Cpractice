/*
세개의 정수를 입력받아서 그 중 가장 큰 수를 반환 하는 함수와 가장 작은 수를
반환하는 함수를 정의
함수를 호출하는 main 함수 작성
*/


#include<stdio.h>

int getBiggest(int a, int b, int c)
{
	int nMax = 0;

	if (a > b&& a > c) {        //a 가 가장 큰 경우
		nMax = a;
	}
	else if (b > c) {    // b가 가장 큰 경우 
		nMax = b;
	}
	else {    //c 가 가장 큰 경우
		nMax = c;
	}

}

int getSmallest(int a, int b, int c)
{
	int Min = 0;

	if (a < b && a < c) {
		Min = a;
	}
	else if (b < c) {    // b가 가장 작은 경우 
		Min = b;
	}
	else {    //c 가 작은경우
		Min = c;
	}

}

void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf(" 최대 숫자 구하기\n");
	printf(" 최소 숫자 구하기\n");

	printf("  숫자를 입력하세요\n");
	scanf("%d %d %d", &a, &b, &c);


	int big = getBiggest(a, b, c);
	int small = getSmallest(a, b, c);

	printf("최대 숫자 : %d\n", big);
	printf("최소 숫자: %d\n", small);

	return 0;
}
