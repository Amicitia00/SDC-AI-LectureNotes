#include <stdio.h>
// �Ʒ��� second_function() �� ����ϱ� ���� ��� �߰�
#include "second.h"

int main(void)
{
	// printf = �Ұ�ȣ ���� ���ڿ� ���
	// ���ڿ��� "" ���̿� ������ ���� ����
	// '\n'�� ���� ���� (����) ����
	printf("Hello First C Programming!\n");

	// second_function �� ��° �۾��̴ٶ�� �ǹ̷� �ۼ�(���Ƿ�)
	// �ܺο� �ִ� �Լ��� ����� ���� *.c ���ϰ� *.h ������ ���� �ۼ�
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ ����
	second_function();

	return 0;
}

// fourth_function���� ���� 7�� ����ϵ��� �����
