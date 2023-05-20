#include <stdio.h>

int main_loop(void)
{
	//printf("HelloWorld\n");

	//증감연산자 ++,--

	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);

	//int b = 20;
	//printf("b는 %d\n", ++b); //21  1을 더한 값을 출력하고 다음 줄로 이동
	//printf("b는 %d\n", b++);//21   문장이 출력된 후에 1을 더해라
	//printf("b는 %d\n", b);//22

	//반복문 for while do while 

	/*printf("\n\n-- - for문----\n\n");
	for (int i=1; i <=10;i++)
	{
		printf("HelloWorld\n", i);
	}*/

	//printf("\n\n-- - while문----\n\n");
	////while(조건){}
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("HelloWorld %d\n", i++);
	//	//i++;
	//}

	//do {} while(조건);
	/*printf("\n\n-- do while문----\n\n");

	int i = 1;
	do {
		printf("HelloWorld %d\n", i++);
	} while (i <= 10);
	*/

	//이중반복문
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문 %d\n", i);

		for (int j = 1; j <= 4; j++)
		{
			printf("     두번째 반복문 %d\n", j);

		}
	}*/

	//구구단 출력
	/*for (int i = 2; i <= 9; i++)
	{   
		printf("\n================\n");
		for (int j = 1; j <= 9;j++) 
		{
			printf("%d * %d = %d\n", i, j, i * j);
		
		}

	
	}*/

   //별찍기
	/*for (int i=0; i<5;i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			printf("*");

		}
		printf("\n");

	}*/

	//역 별찍기
	/*for (int i =0; i<5;i++)
	{
		for (int j = i; j< 5-1; j++)
		{
			printf(" ");
		}
			for (int k = 0; k <= i; k++)
			{
				printf("*");
			   }
			printf("\n");
	} */


	//프로젝트 
	//피라미트 쌓기

	int floor;
	printf("몇층을 쌓나요?");
	scanf_s("%d", &floor);

	for (int i=0; i< floor ; i++)
	{
		for (int j=i; j<floor-1;j++)
		{
			printf(" ");

		}
			for (int k=0; k< i*2+1  ;k++)
			{
				printf("*");
				}
			printf("\n");
	}
	return 0;
}