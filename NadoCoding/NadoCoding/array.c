#include<stdio.h>

int main_array(void)
{

	//�迭 array
	//int subway_array[3]; //3ĭ�� �迭 ����
	////�� �ֱ� �ε����� 0���� ����
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %d ȣ�� ����� %d���Դϴ�.\n", i+1, subway_array[i]);
	//}

	//�� ���� ���
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	//�迭ũ����׻� ����� ����
	int size = 10;
	//int arr[size]; ����

	//int arr[10] = { 1,2 }; //3��° �����ʹ� �ڵ����� 0���� �ʱ�ȭ

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

	//���� vs���ڿ�
	char c = 'A';
	printf("%c\n", c);
	//���ڿ� ������ ���� �ǹ��ϴ� null ���� '\0'�� �� --> ��ĭ�� �� �ʿ���
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

	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//���� �� ���� : 1byte
	//�ѱ� �� ���� : 2byte
	//char          : 1byte

	return 0;

}