#include <stdio.h>
#include "print_even_advanced.h"


//EVEN_DECISION�� ��ũ�� �Լ��� �� ���Դϴ�
//EVEN_DECISION(TARGET_NUMBER)���� TARGET_NUMBER�� ���� �Լ�ó�� �Է��� �Ǿ����ϴ�
// ((TARGET_NUMBER % 2 == 0) ->�Է��� ������ �������� 0�ΰ���?
// 0�̸� ��(TRUE)  0�� �ƴϸ� ����(false) 
// EVEN_DECISION(TARGET_NUMBER)��   ((TARGET_NUMBER) %2 == 0)���� ġȯ�˴ϴ�
#define EVEN_DECISION(TARGET_NUMBER)	((TARGET_NUMBER) %2 == 0)

void print_even_number_from_start_to_end_advanced(int start, int end)
{

	int current_number;

	for (current_number = start; current_number <= end; current_number++)
	{
	
		if (EVEN_DECISION(current_number))
		{
			
			printf("�� ��ȣ�� ¦���Դϴ�: %d\n", current_number);
			
		}
	}
}