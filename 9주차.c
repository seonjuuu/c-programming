
//#include <stdio.h>

/*
// 1���� 100���� �ڿ����� �� 
int main() {
	int count = 1, total = 0;

	while (count <= 100) {
		total = total + count;
		count = count + 1;

	}
	printf("1���� 100���� �ڿ����� ���� %d�Դϴ� \n", total);

	return 0;
}




// �ǽ�1
#include <stdio.h>
int main() {
	int count = 6, total = 0;
	
	while (count <= 100) {
		printf("6�� ���: %d \n", count);
		total = total + count;
		count = count + 6;
	}

	return 0;
}




// �ǽ� 2
#include <stdio.h>
int main() {

	int sum = 0;
	int score = 0;
	do {
		printf("�����Է� (0�� ��) :");
		scanf("%d", &score);
		sum = sum + score;

	} while (score != 0);
	printf("�Է��� �������� ���� = %d\n", sum);
	return 0;
}


// �ǽ�3
#include <stdio.h>
int main() {
	
	int i;
	for (i = 6; i <= 100; i += 6) {
		printf("6�� ���: %d \n", i);
	}
	return 0;
}


*/
#include <stdio.h>
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
	return 0;

}
