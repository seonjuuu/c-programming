
//#include <stdio.h>

/*
// 1부터 100까지 자연수의 합 
int main() {
	int count = 1, total = 0;

	while (count <= 100) {
		total = total + count;
		count = count + 1;

	}
	printf("1부터 100까지 자연수의 합은 %d입니다 \n", total);

	return 0;
}




// 실습1
#include <stdio.h>
int main() {
	int count = 6, total = 0;
	
	while (count <= 100) {
		printf("6의 배수: %d \n", count);
		total = total + count;
		count = count + 6;
	}

	return 0;
}




// 실습 2
#include <stdio.h>
int main() {

	int sum = 0;
	int score = 0;
	do {
		printf("점수입력 (0은 끝) :");
		scanf("%d", &score);
		sum = sum + score;

	} while (score != 0);
	printf("입력한 점수들의 총점 = %d\n", sum);
	return 0;
}


// 실습3
#include <stdio.h>
int main() {
	
	int i;
	for (i = 6; i <= 100; i += 6) {
		printf("6의 배수: %d \n", i);
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


	printf("[swap 전] :");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", arr[i]);
	}
	return 0;

}
