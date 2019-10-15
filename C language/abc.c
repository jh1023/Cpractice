#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
	char a;
	
	//a = 10;
	printf("==========================\n");

	printf("대문자 번역 프로그램\n");
	
	printf("==========================\n");
	printf("소문자 입력\n");



	scanf("%c",&a);

	printf("%c의 대문자는  ",a);

	printf("%c 입니다. \n", a-32);

	
	return 0;

}

