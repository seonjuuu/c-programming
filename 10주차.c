/*
// 실습4
// for문
#include <stdio.h>

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 10 != 3)
			continue;
		printf("%d ", i);
	}
}


// while 문
#include <stdio.h>

int main() {
	int i;

	i = 1;
	while (i <= 100) {
		if (i % 10 != 3) {
			i++;
			continue;
		}
		printf("%d ", i);
		i++;
	}
}


// 종합실습
#include <stdio.h>

int main() {

	int a, b;
	int sum=0;
	printf("두 정수를 입력하세요 :");
	scanf("%d%d", &a,&b);

	if (a == b) {
		sum = a;
	}
	else if (a < b) {
		while (a <= b) {
			sum += a;
			a++;
		}
	}
	else {
		while (a >= b) {
			sum += a;
			a--;
		}
	}
	printf("%합 : %d",sum);
	return 0;
}


// 실습-1
#include <stdio.h>

void printhello()
{
	printf("프로그램을 시작합니다.\n");

}

void printbye()
{
	printf("프로그램을 종료합니다.\n");

}
int main()
{
	printhello();
	printbye();

	return 0;
}

*/
