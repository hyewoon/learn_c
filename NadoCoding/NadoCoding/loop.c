#include <stdio.h>

int main_loop(void)
{
	//printf("HelloWorld\n");

	//���������� ++,--

	int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);

	//int b = 20;
	//printf("b�� %d\n", ++b); //21  1�� ���� ���� ����ϰ� ���� �ٷ� �̵�
	//printf("b�� %d\n", b++);//21   ������ ��µ� �Ŀ� 1�� ���ض�
	//printf("b�� %d\n", b);//22

	//�ݺ��� for while do while 

	/*printf("\n\n-- - for��----\n\n");
	for (int i=1; i <=10;i++)
	{
		printf("HelloWorld\n", i);
	}*/

	//printf("\n\n-- - while��----\n\n");
	////while(����){}
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("HelloWorld %d\n", i++);
	//	//i++;
	//}

	//do {} while(����);
	/*printf("\n\n-- do while��----\n\n");

	int i = 1;
	do {
		printf("HelloWorld %d\n", i++);
	} while (i <= 10);
	*/

	//���߹ݺ���
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù��° �ݺ��� %d\n", i);

		for (int j = 1; j <= 4; j++)
		{
			printf("     �ι�° �ݺ��� %d\n", j);

		}
	}*/

	//������ ���
	/*for (int i = 2; i <= 9; i++)
	{   
		printf("\n================\n");
		for (int j = 1; j <= 9;j++) 
		{
			printf("%d * %d = %d\n", i, j, i * j);
		
		}

	
	}*/

   //�����
	/*for (int i=0; i<5;i++)
	{
		for (int j = 0; j <= i ; j++)
		{
			printf("*");

		}
		printf("\n");

	}*/

	//�� �����
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


	//������Ʈ 
	//�Ƕ��Ʈ �ױ�

	int floor;
	printf("������ �׳���?");
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