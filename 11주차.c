//#include <stdio.h>

/*
//�ǽ�-2
int CompareAverage(int a, int b)
{
	
	if (a < b)
	{
		return(b);
	}
	else
	{
		return(a);
	}
}


int main()
{
	int num1, num2, result = 0;

	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d", &num1, &num2);

	result = CompareAverage(num1, num2);

	printf("�� ū ���� %d �Դϴ� \n", result);

	return 0;

}


//�ǽ�-3



float Average(int, int);

int main()
{
	int num1, num2;
	float avg;

	printf("�� ������ �Է�: ");
	scanf("%d %d", &num1, &num2);

	avg = Average(num1, num2);

	printf("����� %.1f �Դϴ� \n", avg );

	return 0;
}

float Average(int a, int b)
{
	float avg;
	avg = (float) (a + b) / 2;                          // Ÿ�Ժ�ȯ(float)������� �Ҽ��� ������ ���ڵ� ���� !!

	return avg;

}


// ���սǽ�
#include <stdio.h>

int Maxfunc(int a, int b, int c)
{
	int Max;
	if (a > b) {
		if (a > c)
			Max = a;
		else
			Max = c;
	}
	else {
		if (b > c)
			Max = b;
		else
			Max = c;
	}
	return Max;
}

int Minfunc(int a, int b, int c)
{
	int Min;
	if (a < b) {
		if (a < c)
			Min = a;
		else
			Min = c;
	}
	else {
		if (b < c)
			Min = b;
		else
			Min = c;
	}
	return Min;
}


int main()
{
	int num1, num2, num3;


	printf("�� ������ �Է��ϼ��� :");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("�� ���� �� ���� ū ���� %d �Դϴ� \n", Maxfunc(num1, num2, num3));
	printf("�� ���� �� ���� ���� ���� %d �Դϴ� \n", Minfunc(num1, num2, num3));


	return 0;
}
*/