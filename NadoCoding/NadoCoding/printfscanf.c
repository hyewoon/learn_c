#include<stdio.h>
int print(void)
{
	/* 
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	*/ 
	 
	//실수형 변수에 대한 예제
	float f = 46.5f;
	/*
	printf("%.2f\n", f);

	double d = 4.428;

	printf("%.3lf\n", d);
	*/

	//const int YEAR = 2000;
	//printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 2001;

	//printf 연산
	int add = 3 + 7; //10
	printf("3+7=%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3+7);
	printf("%d * %d = %d\n", 3, 7, 3 * 7);


	//scanf : 키보드 입력을 받아서 저장

	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	/*int one, two, three;
	printf("세 개의 입력값을 입력하세요\n");
	scanf_s("%d, %d, %d", &one, &two, &three);
	printf("첫번째 입력값 ; %d\n", one);
	printf("두번째 입력값 ; %d\n", two);
	printf("세번째 입력값 ; %d\n", three);
	*/

	//문자(한글자) 문자열(한 글자 이상의 여러 문자);
	/*char c = 'A';
	printf("%c\n", c);
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
    */


	//프로젝트
	//경찰관이 범죄자에게 질문 (조서작성) 이름, 나이, 키, 몸무게, 범죄명

	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이예요?");
	scanf_s("%d", &age);

	double height;
	printf("키가 몇 cm예요?");
	scanf_s("%lf", &height);

	float weight;
	printf("몸무게는 몇 cm예요?");
	scanf_s("%f", &weight);

	char what[256];
	printf("무슨범죄를 저질렀나요?");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n ----범죄자 정보 ----\n\n");
	printf("이름           : %s\n", name);
	printf("나이           : %d\n", age);
	printf("키             : %.2lf\n", height);
	printf("몸무게         ; %.2f\n", weight);
	printf("범죄명         : %s\n", what);









	return 0;
}