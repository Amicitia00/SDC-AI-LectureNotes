#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"

int main(void)
{
	const int start = 3;
	const int end = 13;
	const int random_number_count = 10;
	// ���� - �� ������ ���ڿ��� ¦���� ���
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ�!\n\n");

	print_even_number_from_start_to_end_advanced(start, end);

	print_random_number(random_number_count);

	return 0;

}