#include<stdio.h>
#include<time.h>

int main_array_project(void)
{
//������Ʈ

	srand(time(NULL));
	printf("\n\n----------�ƺ��� ��Ӹ�����--------------\n\m");

	int answer; //����� �Է°�
	int treatment = rand() % 4; //0~3���� ���� ����

	int cntShowBottle = 0; //�̹����ӿ� ������ �� ����
	int preShowBottle = 0; // �� ���ӿ� ������ �� ����
	//���� �����ִ� ���� �ٸ��� �Ͽ� ������ ����ϱ� ���ؼ�

	//�� 3���� ��ȸ
	for (int i = 0; i < 3; i++)
	{
		int bottle[4] = { 0,0,0,0 };
		do {
			cntShowBottle = rand() % 2 + 2;

		} while (cntShowBottle == preShowBottle);

		int isIncluded = 0; //�����ִ� �� �߿� �߸����� ���ԵǾ����� ǥ��
		printf("%d��° ����", i);
	}



	return 0;
}