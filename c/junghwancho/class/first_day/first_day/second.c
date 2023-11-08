// stdio => Standard IO �� ����
// printf()�� ����Ϸ��� #include <stdio.h> �ʿ�
#include <stdio.h>
#include "second.h"

// void �� �ǹ̴� '����, �� ��'
// �Լ��� �ۼ��ϴ� ���
// 1. ���� return Ÿ���� �ۼ�
//    [���� Ÿ���̶� ��������� ����� �ǹ�]
// 2. �Լ��� �̸��� �ۼ� (�����Ӱ�) <- � �۾����� �ǹ� ���� �����ϰ�
//    [���ڷ� �ۼ��ϴ� �� ����]
// 3. �Ұ�ȣ�� ���� ���� ���� �Ķ����(����, �Է�) Ÿ�� �ۼ�
void second_function(void)
{
	// int number
	// int ��� ���� ������ Ÿ��
	// number�� ������ �̸�
	// Q. ������ ?
	// 1. ���� ���� ������ �� �ִ� ��
	// 2. ���Ǵ�� ���� ������ ����
	// 3. �޸� ������ Ȱ��
	// => Ư���� ������ Ÿ���� �޸� ������ ������ ����
	// ������ Ÿ�� => int, float, double, short, char, long, long long int, long long double
	// int (4byte), float (4byte), double (8byte), short (2byte), char (1byte)
	// 8 bit = 1 byte, 0 Ȥ�� 1�� ǥ���� �� �ִ� ����
	// x bit = 2^x ��ŭ ǥ�� ���� => 1byte = 2^8 = 256 (0~255, -128~127)
	// int, short, char, long long int�� ��� ���� (-300, 0, 90, -400, 123 ���)
	// float, double, long long double�� ��� �Ҽ���
	// char �� ���� ���� ǥ�� ����

	// ������ ����� ���
	// 1. ������ Ÿ�� �ۼ�
	// 2. ���� �̸� ���� (���� �� �ǹ� ����)
	// 3. �ʿ��ϴٸ� ���� �ʱ�ȭ (�ʱ�ȭ = '����' ����)
	// ���� ���� '=' �� ����(����) ���� (not equal)
	int number = 3;
	// %d = decimal�� ���ڷ� number��� ���� ���� ���·� ǥ��
	printf("���� = %d\n", number);
}