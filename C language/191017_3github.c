//#include<stdio.h>

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@191018 github�� �ø���

CelToFah()  //���� �µ��� ȭ�� �µ��� ��ȯ
FahToCel() //ȭ�� �µ��� ���� �µ��� ��ȯ

//���� :Fah = 1.8 x Cel +32
//      Cel = (Fah - 32) / 1.8;




void CelToFah(double Cel)
{
	double Fah = 1.8 * Cel + 32;
	printf("%.1f\n", Fah);

}

void FahToCel(double Fah)
{
	double Cel = (Fah - 32) / 1.8;
	printf("%.1f\n", Cel);

}


int main()
{
	CelToFah(2);
	FahToCel(36);



	return 0;
}
////////
*/







/*
������ ������ �Է¹޾Ƽ� �� �� ���� ū ���� ��ȯ �ϴ� �Լ��� ���� ���� ���� 
��ȯ�ϴ� �Լ��� ����
�Լ��� ȣ���ϴ� main �Լ� �ۼ�  
@@@@@@@@@@@@@@@@@@@@@@@@@@191018 github�� �ø���
*/


#include<stdio.h>

int getBiggest(int a, int b, int c)
{
	int nMax = 0;

	if (a > b && a > c) {        //a �� ���� ū ���
		nMax = a;
	}
	else if (b > c) {    // b�� ���� ū ��� 
		nMax = b;
	}
	else {    //c �� ���� ū ���
		nMax = c;
	}

}

int getSmallest(int d, int e, int f)
{
	int Min = 0;

	if (d < e&& d < f) {        
		Min = d;
	}
	else if (e < f) {    // b�� ���� ���� ��� 
		Min = e;
	}
	else {    //c �� �������
		Min = f;
	}

}

void main()
{
	int a, b, c;
	printf(" �ִ� ���� ���ϱ�\n");
	printf(" �Է��ϼ���\n");


	scanf("%d %d %d", &a, &b, &c);

	int d, e, f;
	printf(" �ּ� ���� ���ϱ�\n");
	printf(" �Է��ϼ���\n");


	scanf("%d %d %d", &d, &e, &f);


	int big = getBiggest(a, b, c);
	int small = getSmallest(d, e, f);

	printf("�ִ� ���� : %d\n", big);
	printf("�ּ� ����: %d\n", small);

	return 0;
}