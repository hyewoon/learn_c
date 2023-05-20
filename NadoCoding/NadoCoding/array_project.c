#include<stdio.h>
#include<time.h>

int main_array_project(void)
{
//프로젝트

	srand(time(NULL));
	printf("\n\n----------아빠는 대머리게임--------------\n\m");

	int answer; //사용자 입력값
	int treatment = rand() % 4; //0~3까지 값이 담긴다

	int cntShowBottle = 0; //이번게임에 보여줄 병 개수
	int preShowBottle = 0; // 앞 게임에 보여준 병 개수
	//서로 보여주는 갯수 다르게 하여 정답율 향상하기 위해서

	//총 3번의 기회
	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0,0,0,0 };
		do {
			cntShowBottle = rand() % 2 + 2;

		} while (cntShowBottle == preShowBottle);

		int isIncluded = 0; //보여주는 병 중에 발모제가 포함되었는지 표시
		printf("%d번째 갯수", i);
	}



	return 0;
}