#include <stdio.h>
// �Ʒ��� second_function() �� ����ϱ� ���� ��������� include �Ͽ���.
#include "second.h"
#include "fourth.h"

int main(void)
{
	int return_value;
	// prinf�� ���״�� �Ұ�ȣ ���ο� �ִ� ���ڿ��� ���.
	// ���ڿ��� "" ���̿� ������ ����ִ� �������� ����.
	// '\n' �� ���� ���� (����) �� ������ ����.
	printf("Hello First C Programming!\n");

	// second_function �� ��° �۾��̶�� �ǹ̷� �ۼ�.
	// �ܺο� �ִ� �Լ��� ����� ���� *.c ���ϰ� *.h ������ ���� �ۼ�.
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ�� ���� �ݾƾ��Ѵ�.
	second_function();
	fourth_function();
		// Q. fourth_function���� ���� 7�� ����ϵ��� �����ô�.



	return 0;
}
