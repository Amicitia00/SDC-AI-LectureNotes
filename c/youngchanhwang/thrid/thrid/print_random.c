#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_random.h"
#include "random_generator.h"

void print_random_number(const int count)
{
	int loop;

	const int min = 10;
	const int max = 20;


	// srand(time(NULL)) �� ������ ������ ������� �׻� ���� �մϴ�.
	srand(time(NULL));

	printf("10 ~ 20 ������ ���� ��ȣ ��� : \n");
	for (loop = 0; loop < count; loop++)
	{
		// x % (MAX - MIN + 1) + MIN
		// %3d => 3ĭ�� �ڸ��� Ȯ���ϱ� ���� /���ϸ� ���ڸ� �� �پ�����
		printf("%3d", generate_random(min, max));
	}
	printf("\n");

}