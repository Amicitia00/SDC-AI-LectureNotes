#include <stdio.h>
// �Ʒ��� second_function()�� ����ϱ� ���� ��� ������ include �Ͽ����ϴ�. 
#include "second.h"
#include "fourth.h"

int main(void)
{
	int return_value;
	//printf �� �� �״�� �Ұ�ȣ ���ο� �ִ� ���ڿ��� ����մϴ�. 
	//���ڿ��� " " (ū ����ǥ) ���̿� ������ ����ִ� �������� �����˴ϴ�. 
	// '\n'�� ���� ���� (����)�� ������ �����մϴ�. 
	printf("Hello First C Programming!\n");

	// second_function �� ��° �۾��̴ٶ�� �ǹ̷� �ۼ��Ͽ��� 
	// �ܺο� �ִ� �Լ��� ����� ���� *.c ���ϰ� *.h ������ ���� �ۼ��ؾ� �մϴ�. 
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ�� ���� �ݾƾ� �մϴ�. 
	second_function();

	//Quiz. fourth function ���� ���� 7�� ����ϵ��� �����ô�!
	fourth_function();
	
	return 0; 
}
/*
#ifdef 0

void �ӵ�����()
{
	//�ӵ� ��� �������� �Ѵ� ���� 
	float voltage = acquire_voltage_from_adc_sensor();
	//���� ���� ���� pid ���� ���� (�ͼ� �� ����, ����, �̺�) 
	pid_t* pid_struct = adjust_pid_control_structure();
	// �������� �ӵ� ���� 
	control_velocity(pid_struct);
}

#endif
*/