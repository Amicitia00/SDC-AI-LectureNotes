#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "random_generator.h"

void random_config(void)
{
	// NULL�� stdio.h�� ���ǵǾ�����
	srand(time(NULL));
}

int generate_random(int min, int max)
{

	return rand() % (max - min + 1) + min;
}