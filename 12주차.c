/*
#include <stdio.h>

//�ǽ�1
int main()
{
	int arr[100], i;

	for (i = 0; i < 100; i++)
		arr[i] = i;
	printf("arr[5]=%d, arr[55]=%d", arr[5], arr[55]);
	return 0;
}

//�ǽ�2
int main()
{
	int students[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л� ��ȣ:", i + 1);
		scanf("%d", &students[i]);
	}

	printf("\n_________\n");

	for (i = 0; i < 5; i++)
		printf("%d�� �л� ������ %d�Դϴ�\n", i + 1, students[i]);
	
	return 0;

}

//�ǽ�3
int main()
{
	int students[5] = { 95, 90, 80, 75, 88 };

	int i, sum = 0;
	float average;

	for (i = 0; i < 5; i++)
	{
		printf("%d�� �л� ������ %d�Դϴ�.\n", i + 1, students[i]);
		sum += students[i];
	}
	average = (float)sum / 5;

	printf("\n________\n");
	printf("�� ������ %d�̰�, ����� %0.1f�Դϴ�.\n", sum, average);

	return 0;
}


// �ǽ�4

#include <stdio.h>

int main()
{
	int arr[5][5];

	int i, j, a=1;

	for (i=0; i< 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = a;
			a++;
			printf("%d ", arr[i][j]);
		}		
		printf("\n");
	}
	return 0;
}

*/