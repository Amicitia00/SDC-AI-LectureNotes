#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "random_generator.h"

void print_random_dice(const int count)
{
	int loop;

	const int min = 1;
	const int max = 6;

	srand(time(NULL));

	printf("1~6������ ������ ���� ���: \n");
	for (loop = 0; loop < count; loop++)
	{
		
		printf("%3d", generate_random(min, max));
	}
}