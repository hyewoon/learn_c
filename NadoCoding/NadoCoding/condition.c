#include<stdio.h>
#include<time.h>

int main_condition(void)
{
	//�������
	/*int age = 33;
	if (age >= 20)
	{
		printf("�����Դϴ�");

	}
	else
	{
		printf("�л��Դϴ�");
	}*/

	// �ʵ��л�/ ���л�/ ����л�/
	/*int age = 3;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�\n");

	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�\n");

	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�\n");

	}
	else
	{
		printf("�л��� �ƴѰ�����\n");
	}*/

	//break & continue

	//1~30�� �л� 
	/*for (int i = 1; i < 30; i++)
	{
		if (i >= 6)
		{
			printf("���� ������\n");
			break;
		}

		printf("%d �л� ��ǥ�� �غ��ϼ���\n ", i);
	}*/

	//7�� �л� �Ἦ
	// 7�� �����ϰ� 1~10������ ���� ��ǥ�� �ϼ��� 
	/*for (int i = 1; i <= 30; i++)
	{ 
		if (i >= 1 && i <= 10)
		{

			if (i == 7)
			{
				printf("%d �л� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л� ������ǥ �غ��ϼ���\n", i);
		}
		
		
	}*/

	//����0����1��2
	//���� ���� ���ϱ� srand
	//srand(time(NULL));
	//int i = rand() % 3;// 0~2������ ���� ��ȯ�� 

	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");

	//}
	//else if(i ==2)
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("�𸣴� ��\n");
	//}

	srand(time(NULL));
	int i = rand() % 3;// 0~2������ ���� ��ȯ�� 

	switch (i)
	{
	case 0: printf("����\n"); break;
	case 1: printf("����\n"); break;
	case 2: printf("��\n");  break;
	default: printf("�����\n"); break;
	}
		
	return 0;
}