#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_random.h"
#include "random_generator.h"

void print_random_number(int count)
{
	int loop;
	const int min = 10;
	const int max = 20;
	
	/*
	srand(time(NULL))�� ������ ������ ������� �׻� ���� �Ѵ�.
	*/
	srand(time(NULL));

	printf("10-20������ ���� ��ȣ ���: \n");
	for (loop = 0; loop < count; loop++)
	{
		// x % (Max - Min + 1) + Min
		// %nd���� n�� ���� ���ڴ� ��°��� �����̽� ����
		printf("%3d", generate_random(min, max));
	}

}