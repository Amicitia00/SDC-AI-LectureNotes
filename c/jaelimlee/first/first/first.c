#include <stdio.h>

// �Ʒ��� second_function()�� ����ϱ� ���� ��� ������ include ��.
#include "second.h"
#include "fourth.h"

int main(void)
{
	int return_value;
	//printf -> �Ұ�ȣ ���ο� �ִ� ���ڿ� ���
	printf("Hello First C Programming!\n");

	// second_function-> �� ��° �۾��̴� ��� �ǹ̷� �ۼ�
	// �ܺο� �ִ� �Լ��� ����� ���� *.c���ϰ� *.h ������ ���� �ۼ��ؾ� ��
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ�� ���� �ݾƾ� ��.
	second_function();

	//Quiz. fourth_function���� ���� 7�� ����ϵ��� �����
	return_value = fourth_function();
	printf("return_value = %d\n", return_value);

	return 0;
}

/*
#ifdef 0

void �ӵ�����()
{
	//�ӵ� ��� �������� �Ѵ� ����
	float coltage = acquired_coltage_from_adc_sensor();
	//���� ���� ���� pid���� ����(���� �� ����, ����, �̺�)
	pid_t* pid_struct = adjust_pid_control_structure();
	//�������� �ӵ� ����
	control_velocity(pid_struct);
}

#endif
*/