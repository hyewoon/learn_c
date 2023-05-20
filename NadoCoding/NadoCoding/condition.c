#include<stdio.h>
#include<time.h>

int main_condition(void)
{
	//버스요금
	/*int age = 33;
	if (age >= 20)
	{
		printf("성인입니다");

	}
	else
	{
		printf("학생입니다");
	}*/

	// 초등학생/ 중학생/ 고등학생/
	/*int age = 3;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다\n");

	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다\n");

	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다\n");

	}
	else
	{
		printf("학생이 아닌가봐요\n");
	}*/

	//break & continue

	//1~30번 학생 
	/*for (int i = 1; i < 30; i++)
	{
		if (i >= 6)
		{
			printf("집에 가세요\n");
			break;
		}

		printf("%d 학생 발표를 준비하세요\n ", i);
	}*/

	//7번 학생 결석
	// 7번 제외하고 1~10번까지 조별 발표를 하세요 
	/*for (int i = 1; i <= 30; i++)
	{ 
		if (i >= 1 && i <= 10)
		{

			if (i == 7)
			{
				printf("%d 학생 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생 조별발표 준비하세요\n", i);
		}
		
		
	}*/

	//가위0바위1보2
	//랜덤 숫자 구하기 srand
	//srand(time(NULL));
	//int i = rand() % 3;// 0~2사이의 값을 반환함 

	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");

	//}
	//else if(i ==2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("모르는 값\n");
	//}

	srand(time(NULL));
	int i = rand() % 3;// 0~2사이의 값을 반환함 

	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n");  break;
	default: printf("몰라요\n"); break;
	}
		
	return 0;
}