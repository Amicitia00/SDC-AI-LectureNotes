#include <time.h> // time �Լ�
#include <stdio.h>
#include <stdlib.h>

#include "random_generator.h"

void random_config(void)
{
	//stdlib.h �̿�
	srand(time(NULL)); //< ������ ����
}

int generate_random(const int min, const int max)
{
	return rand() % (max - min + 1) + min;
}