#include<stdio.h>
void swap(int a, int b);

int main_pointer(void)
{

	//포인터
	int 철수 = 1;
	int 민수 = 2;
	int 정수 = 3;

	printf("철수의 주소는 %d , 암호는 %d\n", &철수, 철수);
	printf("민수의 주소는 %d , 암호는 %d\n", &민수, 민수);
	printf("정수의 주소는 %d , 암호는 %d\n", &정수, 정수);


	//미션맨의 등장 
	//첫번째 미션 : 각 아파트 문에 적힌 암호를 확인하는 일
	int* 미션맨; //포인터 변수 선언
	미션맨 = &철수;
	printf("미션맨이 아는 주소는 %d, 암호는 %d\n", 미션맨,  *미션맨);

	미션맨 = &정수;
	printf("미션맨이 아는 주소는 %d, 암호는 %d\n", 미션맨, *미션맨);

	//두번째 미션: 각 암호에 *3
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 변경한 주소는 %d, 암호는 %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 변경한 주소는 %d, 암호는 %d\n", 미션맨, *미션맨);

	미션맨 = &정수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 변경한 주소는 %d, 암호는 %d\n", 미션맨, *미션맨);

	//주소값을 알고 있으니까 그 주소통해 담긴 값을 알수 있고 변경도 가능하다.

	//스파이의 등장
	//스파이의 역할 : 미션맨이 바꾼 암호에서 1을 빼라
	int* 스파이;
	스파이 = 미션맨;

	printf("\n------스파이가 미션을 수행하는 중 ------\n");
	스파이 = &철수;
	*스파이 = *스파이 - 1;
	printf("스파이가 변경한 주소는 %d, 암호는 %d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 1;
	printf("스파이가 변경한 주소는 %d, 암호는 %d\n", 스파이, *스파이);

	스파이 = &정수;
	*스파이 = *스파이 - 1;
	printf("스파이가 변경한 주소는 %d, 암호는 %d\n", 스파이, *스파이);

	printf("\n==============바뀐 암호를 보고 놀람==========================\n");

	printf("철수의 주소는 %d , 암호는 %d\n", &철수, 철수);
	printf("민수의 주소는 %d , 암호는 %d\n", &민수, 민수);
	printf("정수의 주소는 %d , 암호는 %d\n", &정수, 정수);

	//참고 , 미션맨의 주소
	printf("미션맨의 주소는 : %d미션맨\n", &미션맨);
	printf("스파이 주소는 : %d스파이\n", &스파이);


	//포인터 배열과 아주 친하다

	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값은 : %d \n", i, arr[i]);

	}

	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d]의 값은 : %d \n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++)
	{
		//printf("배열 arr[%d]의 값은 : %d \n", i, arr[i]);
		printf("배열 arr[%d]의 값은 : %d \n", i, *(arr+i));

	}

	for (int i = 0; i < 3; i++)
	{
		//printf("배열 ptr[%d]의 값은 : %d \n", i, ptr[i]);
		printf("배열 ptr[%d]의 값은 : %d \n", i, *(ptr + i));

	}

	//*(arr+i) ==arr[i]
   //arr == arr 배열의 첫번째 값의 주소값과 동일하다 ==&arr[0]

	printf("arr자체의 값 : %d\n", arr);
	printf("arr[0]의 주소값 : %d\n", &arr[0]);

	printf("arr자체의 값이 가지고 있는 주소의 실제값 ; %d\n", *arr); //*(arr+0)
	printf("arr[0]의 실제값: %d\n", *&arr[0]);

	//*&는 아무것도 없는 것과 같다 & 주소 *은 실제값 

	//swap함수
	int a = 10;
	int b = 20;
	printf("a의 주소 : %d\n", &a);
	printf("b의 주소 : %d\n", &b);

	printf("swap함수적용 전 a: %d, b: %d\n", a, b);
	swap(a, b);
	printf("swap함수적용 후  a: %d, b: %d\n", a, b);
	//값이 바뀌지 않음
	//call by value  : 값만 복사한다 

	return 0;
}

	void swap(int a, int b)
	{
		printf("(swap함수 내)a의 주소 : %d\n", &a);
		printf("(swap함수 내)b의 주소 : %d\n", &b);
		int temp = a;
		a = b;
		b = temp;
		printf("swap함수 내   a: %d, b: %d\n", a, b);

   }