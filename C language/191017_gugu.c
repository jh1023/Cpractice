#include <stdio.h>

int main()
{
	int dan;
	int i;
	
	for (dan = 2; dan < 10; dan++)  //2�� ���� �����ؼ� 9�ܱ���
	{
		printf(" <<%d ��>> \n", dan);

		for (i = 1; i < 10; i++)     //n x 1���� �����ؼ� nx 9����
		{
			printf(" %d * %d = %02d\n ", dan, i, dan * i);  // ������ ���
		}
	}
		
	printf("\n");

	return 0;
}