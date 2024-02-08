/*
#include <stdio.h>

//실습1
int main()
{
	int arr[100], i;

	for (i = 0; i < 100; i++)
		arr[i] = i;
	printf("arr[5]=%d, arr[55]=%d", arr[5], arr[55]);
	return 0;
}

//실습2
int main()
{
	int students[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생 번호:", i + 1);
		scanf("%d", &students[i]);
	}

	printf("\n_________\n");

	for (i = 0; i < 5; i++)
		printf("%d번 학생 점수는 %d입니다\n", i + 1, students[i]);
	
	return 0;

}

//실습3
int main()
{
	int students[5] = { 95, 90, 80, 75, 88 };

	int i, sum = 0;
	float average;

	for (i = 0; i < 5; i++)
	{
		printf("%d번 학생 점수는 %d입니다.\n", i + 1, students[i]);
		sum += students[i];
	}
	average = (float)sum / 5;

	printf("\n________\n");
	printf("반 총합은 %d이고, 평균은 %0.1f입니다.\n", sum, average);

	return 0;
}


// 실습4

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