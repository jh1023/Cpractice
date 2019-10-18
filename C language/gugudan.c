//구구단 역순 출력 

#include <stdio.h>



int main()

{
	int i;
	int j = 9;

	printf(" 문제 4번 191016!!!구구단 역순출력 \n");
	scanf("%d", &i);
	
	while (i > 0) 
	{		
		while (j > 0) 
		{


			printf("   %d x %d = %d  \n", i, j, i * j);

			j--;
			
		}
		i--;		

	}

	return 0;
}

/*
구구단 출력 프로그램@@

#include <stdio.h>



int main()

{
	int i;
	int j = 1;

	printf(" 문제 4번 191016!!!구구단 출력 \n");
	scanf("%d", &i);
	
	while (i > 0) 
	{		
		while (j < 10) 
		{


			printf("   %d x %d = %d  \n", i, j, i * j);

			j++;
			
		}
		i++;		

	}

	return 0;
}

*/
