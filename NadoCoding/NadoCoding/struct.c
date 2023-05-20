#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

};


int main(void)
{
	
  //자료형에 별명 지정 typedef
	int in = 1;
	typedef int 정수;
	
	정수 정수변수 = 3;
	typedef float 실수;
	실수 실수변수 = 3.53f;
	printf("\n\n정수변수 ; %d ,실수변수 : %.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2015;

	return 0;
}