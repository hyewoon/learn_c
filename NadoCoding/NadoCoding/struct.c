#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

};


int main(void)
{
	
  //�ڷ����� ���� ���� typedef
	int in = 1;
	typedef int ����;
	
	���� �������� = 3;
	typedef float �Ǽ�;
	�Ǽ� �Ǽ����� = 3.53f;
	printf("\n\n�������� ; %d ,�Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2015;

	return 0;
}