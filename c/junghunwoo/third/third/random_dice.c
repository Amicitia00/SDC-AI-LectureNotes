#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "random_generator.h"
#include "random_dice.h"

void random_dice(const int count)
{
	int loop;

	int dice_number;
	int score = 0;

	const int min = 1;
	const int max = 6;

	
	for (loop = 0; loop < count; loop++)
		{
		dice_number = generate_random(min, max);
		score = score + dice_number;
		printf("%d�� ° ������ ���� �ֻ��� ���� : %d �̰� ��ģ ���� %d�̴�\n", loop + 1, dice_number, score);
		}
	
}