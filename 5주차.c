/*
// 실습 1

# include <stdio.h>

int main()
{
	int base = 28;
	int height = 36;

	printf("삼각형 넓이 : %d\n", (base * height) / 2);

	return 0;
}






// 실습 2

#include <stdio.h>

int main()
{
	double a = 3.7;
	int b = 4;
	b = (int)a;
	printf("결과값 : %d\n" , b);
	
	return 0;
}




// 실습3
#include <stdio.h>

int main()
{
	int x = 0;

	printf("정수입력:");
	scanf("%d", &x);

	printf("%d\n" , x == 1 || x== 2 || x==3);
	printf("%d\n", x >= 5 && x <= 10);
	printf("%d\n", x != 0 && x != 10);

	return 0;
}




// 실습4
#include <stdio.h>

int main()
{
	unsigned int a = 1;
	unsigned int b = (a << 5);
	unsigned int c = (b << 5);
	unsigned int d = (c << 5);
	unsigned int e = (d << 5);

	printf("2의 5승 = %x(%u)\n", b , b);
	printf("2의 10승 = %x(%u)\n", c, c);
	printf("2의 15승 = %x(%u)\n", d, d);
	printf("2의 20승 = %x(%u)\n", e, e);

	return 0;

}



// 과제
#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;

	printf("정수 x 입력=");
	scanf("%d", &x);
	printf("정수 y 입력=");
	scanf("%d", &y);

	printf("\n");

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);

	printf("\n");

	printf("x > y의 결과값은 %d이다\n", x > y);
	printf("x == y의 결과값은 %d이다\n", x == y);
	return 0;

}

*/


