#include <stdio.h>
//�Ʒ��� second_function()�� ������Ϸ�
#include "second.h"

int main(void)
{
	printf("Hello First C Programming!\n");

	//second_function �� ��° �۾��̴ٶ�� �ǹ̷� �ۼ��Ͽ���
	//�ܺο� �ִ� �Լ��� ����� ���� *.c ���ϰ� *.h ������ ���� �ۼ��ؾ� �մϴ�.
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� �Ұ�ȣ�� ���� �ݾƾ� �մϴ�.
	second_function();

	//Quiz. fourth_function���� ���� 7�� ����ϵ��� �����ô�!
	fourth_function();

	return 0;
}

/*
{
	float voltage = acquire_voltage_adc_sensor();
	pid_t* pid senc
}
#endif
*/