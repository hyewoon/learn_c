#include<stdio.h>
int print(void)
{
	/* 
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	*/ 
	 
	//�Ǽ��� ������ ���� ����
	float f = 46.5f;
	/*
	printf("%.2f\n", f);

	double d = 4.428;

	printf("%.3lf\n", d);
	*/

	//const int YEAR = 2000;
	//printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;

	//printf ����
	int add = 3 + 7; //10
	printf("3+7=%d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3+7);
	printf("%d * %d = %d\n", 3, 7, 3 * 7);


	//scanf : Ű���� �Է��� �޾Ƽ� ����

	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);

	/*int one, two, three;
	printf("�� ���� �Է°��� �Է��ϼ���\n");
	scanf_s("%d, %d, %d", &one, &two, &three);
	printf("ù��° �Է°� ; %d\n", one);
	printf("�ι�° �Է°� ; %d\n", two);
	printf("����° �Է°� ; %d\n", three);
	*/

	//����(�ѱ���) ���ڿ�(�� ���� �̻��� ���� ����);
	/*char c = 'A';
	printf("%c\n", c);
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
    */


	//������Ʈ
	//�������� �����ڿ��� ���� (�����ۼ�) �̸�, ����, Ű, ������, ���˸�

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);

	double height;
	printf("Ű�� �� cm����?");
	scanf_s("%lf", &height);

	float weight;
	printf("�����Դ� �� cm����?");
	scanf_s("%f", &weight);

	char what[256];
	printf("�������˸� ����������?");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n ----������ ���� ----\n\n");
	printf("�̸�           : %s\n", name);
	printf("����           : %d\n", age);
	printf("Ű             : %.2lf\n", height);
	printf("������         ; %.2f\n", weight);
	printf("���˸�         : %s\n", what);









	return 0;
}