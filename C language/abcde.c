#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지

#include <stdio.h>

int main()

{
	char i;
	printf("알파벳을 입력해주세요.\n");

	scanf("%c", &i);

	for (i; i <= 122; i++) {
		
		printf("%c 입니다.\n", i);

	}


	return 0;
}
