//#include <stdio.h>
/*
int main()
{
	char x = 'a';
	int y = 10;
	double z = 2.25;

	printf("x=%c\n", x);
	printf("y =%d\n", y);
	printf("z=%f\n", z);

	printf("x=%d\n", &x);
	printf("y=%d\n", &y);
	printf("z=%d\n", &z);

	return 0;
}


// �ǽ� 1

int main()
{
	int i = 10;
	int* ptr = &i;


	printf("prt�� �ּҰ� : %p\n", &ptr);
	printf("i�� �ּҰ� : %p\n", &i);
	printf("i�� �ּҰ� : %p\n", ptr);

	printf("i�� �� : %d\n", i);
	printf("i�� �� : %d\n", *ptr);

	return 0;
}

// �ǽ� 2
int main()
{
	int i = 10;
	int* ptr = &i;

	i = *ptr + 20;
	printf("i�� �� : %d\n", i);

	i = *ptr + 30;
	printf("i�� �� : %d", i);

	return 0;
}



//�ǽ�3
int main()
{
	int arr[] = { 15,23,7,78,34,67,45,36,90,71 };
	int* p = arr;
	int amount;
	int count;
	int i;

	count = sizeof(arr) / sizeof(arr[0]);
	printf("[���� �迭]");
	for (i = 0; i < count; i++)
		printf("%3d", arr[i]);

	printf("\n�������� �Է��ϼ��� : ");
	scanf("%d", &amount);

	for (i = 0; i < count; i++)
	{
		p[i] = p[i] + amount;

	}

	printf("[������ �迭]");

	for (i = 0; i < count; i++)
		printf("%3d", p[i]);

	return 0;



}


// [���սǽ�]

#include <stdio.h>

void swapArray(int*ptr, int aIdx, int bIdx);

int main(void)
{
	int arr[10] = { 15,23,7,78,34,67,45,36,90,71 };
	int i;
	int aIdx, bIdx;


	printf("[swap ��] :");
	for (i = 0; i < 10; i++) 
	{
		printf("%3d", arr[i]);
	}

	printf("\n �ε��� 2���� ���� : ");
	scanf("%d %d", &aIdx, &bIdx);

	swapArray(arr, aIdx, bIdx);

	printf("[swap ��] :");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", arr[i]);
	}


	return 0;
}

void sawpArray(int*ptr, int aIdx, int bIdx)
{
	int temp;
	
	temp = ptr[aIdx];
	ptr[aIdx] = ptr[bIdx];
	ptr[bIdx] = temp;


}


#include <stdio.h>
int main()
{
	int i;

	for (; i < 10; i++)
		printf("%d", i);
	return 0;
}
*/