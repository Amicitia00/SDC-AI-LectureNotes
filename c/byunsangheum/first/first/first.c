#include <stdio.h>
#include "second.h"
#include "fourth.h"

int main(void)
{

	printf("Hello First C Programming!\n");

	// second_function �� ��° �۾��̴ٶ�� �ǹ̷� �ۼ��Ͽ���
	// �ܺο� �ִ� �Լ��� ����� ���� *.c ���ϰ� *.h ������ ���� �ۼ��ؾ� �մϴ�.
	// ����� ���� �Լ��� �̸��� �ۼ��ϰ� ��Ȱȣ�� ���� �ݾƾ� �մϴ�.
	second_function();
	fourth_function();
	


	// Quiz. fourth_function���� ���� 7�� ����ϵ��� �����ô�.
	return 0;
}

/*
void �ӵ�����()
{
	// �ӵ� ��� �������� �Ѵ� ����
	float voltage = acqurire_vlatage_form_adc_sencor();
	// ���� ���� ���� pid ���� ���� (���� �� ����, ����, �̺�)
	pid_t* pid_struct = adjust_pid_control_structure();
	// �������� �ӵ� ����

}
#endif // DEBUG
*/