#include<stdio.h>

//�Լ�����
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
	//����

	//int num = 2;
	////printf("num���� %d�Դϴ�\n", num);
	//p(num);

	//num = num + 3; // num +=3;
	////printf("num���� %d�Դϴ�\n", num); //5
	//p(num);
	//num -= 1;
	//printf("num���� %d�Դϴ�\n", num);//4

	////4*3
	//num *= 3;
	//printf("num���� %d�Դϴ�\n", num);//12

	////12/6
	//num /= 6;
	//printf("num���� %d�Դϴ�\n", num);//2


	//�Լ��� ����
	//1��ȯ���� ���� �Լ� 
	//ȣ��
	function_without_return();
	//��ȯ���� �ִ� �Լ�
	int ret = function_with_return();
	p(ret);

	//���ް��� ���� �Լ�
	function_without_params();

	//���ް��� �ִ� �Լ�
	function_with_params(1, 2, 3);

	//���ް��� �ְ�, ��ȯ���� �ִ� �Լ�
	int re = apple(5,2);
	//printf("��� 5�� �� 2���� ������ %d���� ���ƿ�\n", re);
	printf("��� %d�� �߿� %d���� ������ %d���� ���ƿ�\n", 10, 4, apple(10, 4));


	//���� �Լ�
	int num = 2;
	num= add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);

	//������Ʈ


	return 0;
}

//����
void p(int num)
{
	printf("num���� %d�Դϴ�\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}


int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��Դϴ�\n");
	printf("���ް��� %d, %d, %d �Դϴ�.", num1, num2, num3);

}

int apple(int a, int b)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�\n");
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
