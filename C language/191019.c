//최대 공약수 구하는 

#include <stdio.h>
 
int main()
{
    int a;
    int b;
    int m = 1;
 
    printf("두개의 정수 입력 : ");
 
    scanf("%d", &a);
    scanf("%d", &b);
 
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            m = i;
        }
        
    }
    printf("%d", m);
}
