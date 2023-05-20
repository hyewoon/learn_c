#include<stdio.h>

//함수선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int a, int b);

int add(int num5, int num6);
int sub(int num7, int num8);
int mul(int num9, int num10);
int div(int num11, int num12);


int main_function(void)

{
	//function
	//계산기

	//int num = 2;
	////printf("num값은 %d입니다\n", num);
	//p(num);

	//num = num + 3; // num +=3;
	////printf("num값은 %d입니다\n", num); //5
	//p(num);
	//num -= 1;
	//printf("num값은 %d입니다\n", num);//4

	////4*3
	//num *= 3;
	//printf("num값은 %d입니다\n", num);//12

	////12/6
	//num /= 6;
	//printf("num값은 %d입니다\n", num);//2


	//함수의 종류
	//1반환값이 없는 함수 
	//호출
	function_without_return();
	//반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	//전달값이 없는 함수
	function_without_params();

	//전달값이 있는 함수
	function_with_params(1, 2, 3);

	//전달값도 있고, 반환값도 있는 함수
	int re = apple(5,2);
	//printf("사과 5개 중 2개를 먹으면 %d개가 남아요\n", re);
	printf("사과 %d개 중에 %d개를 먹으면 %d개가 남아요\n", 10, 4, apple(10, 4));


	//계산기 함수
	int num = 2;
	num= add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	//프로젝트


	return 0;
}

//정의
void p(int num)
{
	printf("num값은 %d입니다\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}


int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수입니다\n");
	printf("전달값은 %d, %d, %d 입니다.", num1, num2, num3);

}

int apple(int a, int b)
{
	printf("전달값과 반환값이 있는 함수입니다\n");
	return a - b;
}

int add(int num5, int num6)
{
	return num5 + num6;
}

int sub(int num7, int num8)
{
	return num7 - num8;
}

int mul(int num9, int num10)
{
	return num9 * num10;
}

int div(int num11, int num12)
{
	return num11 / num12;
}
