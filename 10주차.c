/*
// �ǽ�4
// for��
#include <stdio.h>

int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 10 != 3)
			continue;
		printf("%d ", i);
	}
}


// while ��
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


// ���սǽ�
#include <stdio.h>

int main() {

	int a, b;
	int sum=0;
	printf("�� ������ �Է��ϼ��� :");
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
	printf("%�� : %d",sum);
	return 0;
}


// �ǽ�-1
#include <stdio.h>

void printhello()
{
	printf("���α׷��� �����մϴ�.\n");

}

void printbye()
{
	printf("���α׷��� �����մϴ�.\n");

}
int main()
{
	printhello();
	printbye();

	return 0;
}

*/
