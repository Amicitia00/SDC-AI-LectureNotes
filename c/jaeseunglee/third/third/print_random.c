#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "print_random.h"
#include "random_generator.h"


void print_random_number(const int count)
{
	int loop;

	const int min = 130;
	const int max = 211;
	// srand(time(NULL)) �� ������ ������ ������� �׻� �����մϴ�.
	srand(time(NULL));

	printf("10 ~ 20������ ���� ��ȣ ��� : \n");
	for (loop = 0; loop < count; loop++)
	{

		// x % (MAX - MIN + 1) + MIN
		printf("%5d",generate_random(min,max));
	}
}