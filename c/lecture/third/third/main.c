#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"

int main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;

	// ���� ~ �� ������ ���ڿ��� ¦���� ���
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ�!\n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	return 0;
}