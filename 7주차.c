/*
//실습3
#include <stdio.h>

int main()
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	if (num == 0) {
		printf("0은 짝수도 홀수도 아닙니다");
	}
	else if (num % 2 == 0) {
		printf("%d는 짝수입니다", num);
	}
	else {
		printf("%d는 홀수입니다", num);
	}
	return 0;
}


// 실습4
#include <stdio.h>

int main()
{
	int score;
	double avg;           

	printf("총점을 입력하세요 : ");
	scanf("%d", &score);

	avg = score/3.0 ;                                                     //avg = score/3 : 평균이 정수형으로 들어감 

	if (score >= 0 && score <= 300) {                                     //and X > && (논리연산자)
		if (avg >= 90.0) {
			printf("평균 = %.1f , 학점 : A", avg);                       // 0.1f 
		}
		else if (avg >= 80.0) {
			printf("평균 = %.1f , 학점 : B ", avg);
		}
		else if (avg >= 70.0) {
			printf("평균 = %.1f , 학점 : C ", avg);
		}
		else {
			printf("평균 = %.1f , 학점 : F ", avg);
		}
	}
	else {
		printf("에러");
	}
	return 0;
}



//실습5
#include <stdio.h>

int main()
{
	int manu;
	
	printf("1.메뉴1\n2.메뉴2\n3.메뉴3\n");
	printf(">>> 선택 :");
	scanf("%d", &manu);

	switch(manu)
	{
	case 1:
		printf("메뉴1이 선택되었습니다\n");
		break;
	case 2:
		printf("메뉴2가 선택되었습니다\n");
		break;
	case 3:
		printf("메뉴3이 선택되었습니다\n");
		break;
	default:
		printf("default\n");
		break;
	}
	return 0;
}




// 종합 실습

#include <stdio.h>

int main()
{
	int score;
	double avg;

	printf("총점을 입력하세요 : ");
	scanf("%d", &score);

	avg = score / 3.0;                                                      

	if (score >= 0 && score <= 300) {

		switch (score / 30)
		{
		case 10:
		case 9:
			printf("평균 = %.1f , 학점 : A \n", avg);
			break;
		case 8:
			printf("평균 = %.1f , 학점 : B \n", avg);
			break;
		case 7:
			printf("평균 = %.1f , 학점 : C \n", avg);
			break;
		default:
			printf("default\n");
			break;
		}
	}
	else {
		printf("에러\n");
	}
	return 0;
	}
	

*/

