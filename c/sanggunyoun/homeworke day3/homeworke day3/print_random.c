#include <stdio.h>
#include <stdlib.h>
#include "print_random.h"
#include "random_generator.h"

void print_random_number(const int count)
{
	int loop;

	const int min = 1;
	const int max = 6;



	printf("10~20������ ���� ��ȣ ���: \n");
	for (loop = 0; loop < count; loop++)
	{
		
		printf("%3d", generate_random(min, max));
	}
	printf("\n");
}