/*
// �ǽ� 1

# include <stdio.h>

int main()
{
	int base = 28;
	int height = 36;

	printf("�ﰢ�� ���� : %d\n", (base * height) / 2);

	return 0;
}






// �ǽ� 2

#include <stdio.h>

int main()
{
	double a = 3.7;
	int b = 4;
	b = (int)a;
	printf("����� : %d\n" , b);
	
	return 0;
}




// �ǽ�3
#include <stdio.h>

int main()
{
	int x = 0;

	printf("�����Է�:");
	scanf("%d", &x);

	printf("%d\n" , x == 1 || x== 2 || x==3);
	printf("%d\n", x >= 5 && x <= 10);
	printf("%d\n", x != 0 && x != 10);

	return 0;
}




// �ǽ�4
#include <stdio.h>

int main()
{
	unsigned int a = 1;
	unsigned int b = (a << 5);
	unsigned int c = (b << 5);
	unsigned int d = (c << 5);
	unsigned int e = (d << 5);

	printf("2�� 5�� = %x(%u)\n", b , b);
	printf("2�� 10�� = %x(%u)\n", c, c);
	printf("2�� 15�� = %x(%u)\n", d, d);
	printf("2�� 20�� = %x(%u)\n", e, e);

	return 0;

}



// ����
#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;

	printf("���� x �Է�=");
	scanf("%d", &x);
	printf("���� y �Է�=");
	scanf("%d", &y);

	printf("\n");

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);

	printf("\n");

	printf("x > y�� ������� %d�̴�\n", x > y);
	printf("x == y�� ������� %d�̴�\n", x == y);
	return 0;

}

*/


