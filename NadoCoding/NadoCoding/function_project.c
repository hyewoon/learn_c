#include<stdio.h>
#include<time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main_function_project(void)
{
   //문이 다섯개인 퀴즈 점점 어려운 숫자 계산
	// 맞히면 성공, 못맞추면 실패

	srand(time(NULL));
	int count = 0; //맞힌 개수
	for (int i = 1; i <= 5; i++)
	{
		//x*y
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);

		//printf("%d * %d?", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램을 종료합니다");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
	}

	printf("당신은 비밀번호 중 %d개를 맞혔습니다.\n", count);


	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n============ % d번째 비밀번호========================\n\n", level);
	printf("\n\t %d * %d ?\n\n ", num1, num2);
	printf("비밀번호를 입력하세요\n");
}

void success()
{
	printf("성공입니다\n");
}
void fail()
{
	printf("실패입니다\n");
}