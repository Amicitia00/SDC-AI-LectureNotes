#include <stdio.h>
// �Ʒ��� second_functio() �� ����ϱ� ���� ��� ������ include ��
#include "second.h"
#include "forth.h"

int main(void)
{
	// printf�� �� �״�� �Ұ�ȣ ���ο� �ִ� ���ڿ��� ���
	// ���ڿ��� "" ���̿� ������ ���� �ִ� �������� ����
	// "\n" �� enterŰ�� ������ ����
	printf("Hello First C Programming!\n");
	
	// second_function �� �� ��° �۾��̶�� ��
	// �ܺο� �ִ� �Լ��� ����� ������ *.c ���ϰ� *.h ������ ���� �ۼ��ؾ� ��
	// ����� ������ �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ�� ���� �ݾƾ� ��
	second_function();

	// Q. forth_function���� ���� 7�� ����ϵ��� �����ô�!
	forth_function();

	return 0;
}
/*
#ifdef 0

void �ӵ�����()
{
	// �ӵ� ��� �������� �Ѵ� ����
	float voltage = aquire_voltage_from_adc_sensor();
	// ���� ���� ���� pid ���� ���� (���� �� ����, ����, �̺�)
	pid_t* pid_struct = adjust_pid_control_structure();
	// �������� �ӵ� ����
	control_velocity(pid_struct);
}
*/

