//#include <stdio.h>

/*
//실습-2
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

	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &num1, &num2);

	result = CompareAverage(num1, num2);

	printf("더 큰 수는 %d 입니다 \n", result);

	return 0;

}


//실습-3



float Average(int, int);

int main()
{
	int num1, num2;
	float avg;

	printf("두 정수를 입력: ");
	scanf("%d %d", &num1, &num2);

	avg = Average(num1, num2);

	printf("평균은 %.1f 입니다 \n", avg );

	return 0;
}

float Average(int a, int b)
{
	float avg;
	avg = (float) (a + b) / 2;                          // 타입변환(float)적어줘야 소수점 이하의 숫자도 나옴 !!

	return avg;

}


// 종합실습
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


	printf("세 정수를 입력하세요 :");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("세 정수 중 가장 큰 수는 %d 입니다 \n", Maxfunc(num1, num2, num3));
	printf("세 정수 중 가장 작은 수는 %d 입니다 \n", Minfunc(num1, num2, num3));


	return 0;
}
*/