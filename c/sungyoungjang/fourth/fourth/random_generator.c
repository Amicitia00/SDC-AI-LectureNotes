#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "random_generator.h"

void random_config(void)
{
	// NULL�� stdio.h �� ���� �Ǿ� ����
	srand(time(NULL));
}


int generate_random(const int min, const int max)
{
	return rand() % (max - min + 1) + min;
}