#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "print_random.h"

void print_random_number(int count)
{
	int loop;
	srand(time(NULL));

	printf("10 ~ 20������ ���� ��ȣ ��� : \n");
	for (loop = 0; loop < count; loop++)
	{

		// x % (MAX - MIN + 1) + MIN
		printf("%3d",rand()%11 + 10);
	}
}