#include<stdio.h>

int main_array(void)
{

	//배열 array
	//int subway_array[3]; //3칸의 배열 선언
	////값 넣기 인덱스는 0부터 시작
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d 호에 사람은 %d명입니다.\n", i+1, subway_array[i]);
	//}

	//값 설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//배열크기는항상 상수로 선언
	int size = 10;
	//int arr[size]; 오류

	//int arr[10] = { 1,2 }; //3번째 값부터는 자동으로 0으로 초기화

	//for(int i=0; i<10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	
	/*int arr[] = { 1,2 };
	float arr_f[5] = { 1.5f, 2.4f };

	for(int i=0; i<5; i++)
		{
			printf("%.2f\n", arr_f[i]);
		}*/

	//문자 vs문자열
	char c = 'A';
	printf("%c\n", c);
	//문자열 끝에는 끝을 의미하는 null 문자 '\0'이 들어감 --> 한칸이 더 필요함
	//char str[6] = "string"; 
	/*char str[7] = "string";
	printf("%s\n", str);*/

	//char str[] = "string";
	//printf("%s\n", str);
	////printf("%d\n", sizeof(str));
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
 //  }

	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//영어 한 글자 : 1byte
	//한글 한 글자 : 2byte
	//char          : 1byte

	return 0;

}