#include <stdio.h>
#include "dice_game.h"
#include "random_generator.h"

#define MAX 6
#define MIN 1

dice_number;


void roll_dice(void)
{
	dice_number = generate_random(MIN, MAX);
}

void print_dice_number(void)
{
	printf("������ ���� �ֻ��� ���� = %d\n", dice_number);
}