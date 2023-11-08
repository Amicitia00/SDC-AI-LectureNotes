#include <stdio.h>
#include "print_even_advanced.h"

/*
define�� �ϸ� ���� ����, compiler�� ����ǹǷ� �̵�(?) 
 EVEN_DECISION �� ��ũ�� �Լ��� �� ��
 EVEN_DECISION(TARGET_NUMBER) ���� TARGET_NUMBER �� ���� �Լ�ó�� �Էµ�
 ((TARGET_NUMBER) % 2 == 0) -> �Է��� 2�� ������ �������� 0�ΰ�?
 0�̸� TRUE, �ƴϸ� FALSE
*/

/*
EVEN_DECISIO(TARGET_NUMBER) �� ((TARGET_NUMBER) % 2 == 0) ���� ġȯ
*/
#define EVEN_DECISION(TARGET_NUMBER)       ((TARGET_NUMBER) % 2 == 0)

void print_even_number_from_start_to_end_advanced(int start, int end)
{
	int current_number;

	for (current_number = start; current_number <= end; current_number++)
	{
	
		if (EVEN_DECISION(current_number))
		{
			printf("�� ��ȣ�� ¦���Դϴ� : %d\n", current_number);
		}
	}
}