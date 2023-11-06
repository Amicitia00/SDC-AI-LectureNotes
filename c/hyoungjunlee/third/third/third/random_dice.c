#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "random_generator.h"
#include "random_dice.h"

void random_dice(const int count)
{
	int loop;
	
	const int min = 1;
	const int max = 6;

	//srand(time(NULL))�� ���ڱ��� ������ ������� �׻� ���� �մϴ�
	srand(time(NULL));

	printf("�ֻ��� �� %d�� ���� ���: \n",count);
	for (loop = 0; loop < count; loop++)
	{
		// x % (MAX - MIN +1) + MIN
		printf("%3d", generate_random(min, max));

	}

}