/*
//�ǽ�3
#include <stdio.h>

int main()
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	if (num == 0) {
		printf("0�� ¦���� Ȧ���� �ƴմϴ�");
	}
	else if (num % 2 == 0) {
		printf("%d�� ¦���Դϴ�", num);
	}
	else {
		printf("%d�� Ȧ���Դϴ�", num);
	}
	return 0;
}


// �ǽ�4
#include <stdio.h>

int main()
{
	int score;
	double avg;           

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	avg = score/3.0 ;                                                     //avg = score/3 : ����� ���������� �� 

	if (score >= 0 && score <= 300) {                                     //and X > && (��������)
		if (avg >= 90.0) {
			printf("��� = %.1f , ���� : A", avg);                       // 0.1f 
		}
		else if (avg >= 80.0) {
			printf("��� = %.1f , ���� : B ", avg);
		}
		else if (avg >= 70.0) {
			printf("��� = %.1f , ���� : C ", avg);
		}
		else {
			printf("��� = %.1f , ���� : F ", avg);
		}
	}
	else {
		printf("����");
	}
	return 0;
}



//�ǽ�5
#include <stdio.h>

int main()
{
	int manu;
	
	printf("1.�޴�1\n2.�޴�2\n3.�޴�3\n");
	printf(">>> ���� :");
	scanf("%d", &manu);

	switch(manu)
	{
	case 1:
		printf("�޴�1�� ���õǾ����ϴ�\n");
		break;
	case 2:
		printf("�޴�2�� ���õǾ����ϴ�\n");
		break;
	case 3:
		printf("�޴�3�� ���õǾ����ϴ�\n");
		break;
	default:
		printf("default\n");
		break;
	}
	return 0;
}




// ���� �ǽ�

#include <stdio.h>

int main()
{
	int score;
	double avg;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	avg = score / 3.0;                                                      

	if (score >= 0 && score <= 300) {

		switch (score / 30)
		{
		case 10:
		case 9:
			printf("��� = %.1f , ���� : A \n", avg);
			break;
		case 8:
			printf("��� = %.1f , ���� : B \n", avg);
			break;
		case 7:
			printf("��� = %.1f , ���� : C \n", avg);
			break;
		default:
			printf("default\n");
			break;
		}
	}
	else {
		printf("����\n");
	}
	return 0;
	}
	

*/

