// stdio.h = ǥ�� �����, 
// printf()�� ����Ϸ��� �ʿ��ϴ�

#include <stdio.h>
#include "second.h"


//	void ���� ������, �� ��
// 
//	�Լ� �ۼ� ���
// 
//	1. return Ÿ�� ����
//	[���� Ÿ���̶� ��������� ����� �ǹ�]
// 
//	2. �Լ��̸� �ۼ�(�̸��� �˱� ������, Ǯ��������)
// 
//	3. �Ұ�ȣ�� ���� ���� �� �Ķ����(����, �Է�)Ÿ���� �ۼ�

void second_function(void)
{
	// int �� ������Ÿ��
	// number�� ���� �̸�
	// ���� = �޸𸮿� ������ �Ҵ�
	// => Ư�� ������Ÿ���� ������ ������ ����
	// ������ Ÿ�� = int, float, double, short, long, long long int, long long double
	// int(4byte) float(4byte) double(8byte) short(2byte) char(1byte)

	// byte��?
	// 1byte = 8bit
	// bit = 0or1�� ǥ���� �� �ִ� ����
	// 1bit = 2 / 2bit = 4 / ... / 8bit = 1byte = 256 (2^8) => (0~255) / (-128~127)

	//	int, short, char, long long int �� ����
	//	float, double, longlongdouble �� �Ǽ�
	//	char�� ���� ���� ǥ���� �� ����

	//	������ ����� ���
	//	1. ������ Ÿ�� ����
	//	2. ������ �̸� ����(������ �ǹ̸� Ȯ���ϰ�)
	//	3. �ʿ��ϴٸ� ������ �ʱ�ȭ (����='����')

	//	���ǻ��� : '='�� ���� ����
	int number = 3;

	// %d == decimal �ڿ� ���� number�� ǥ��
	printf("���� = %d\n", number);

}


void funcc(int a)
{
	if (a > 0)
	{
		for (a; a < 10; a++)
		{
			printf("%d\n", a);
		}
		printf("\n\n\n\n");
	}
}

