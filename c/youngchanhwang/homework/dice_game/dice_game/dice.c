#include <stdio.h>

#include "dice.h"
#include "random_generator.h"

#define MAX			6
#define MIN			1

int dice_number = 0;


void dice_roll(void)
{
	dice_number = random_generate(MIN, MAX);

}

void print_dice_number(void)
{
	printf("���� ���ڴ� = %d �Դϴ� \n", dice_number);
}