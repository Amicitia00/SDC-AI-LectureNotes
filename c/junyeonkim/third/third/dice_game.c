#include<stdio.h>
#include "dice_game.h"
#include "random_generator.h"

#define MAX			6
#define MIN			1

int dice_number = 0;
int dice_number2 = 0;
// ���� ��� ���Ͽ� �ִ� extern int dice_number�� ����
// �� dice_game.c�� �ִ� dice_number ������ ����ϰ����� �ǹ��մϴ�.

void roll_dice(void)
{
	dice_number = generate_random(MIN, MAX);
	dice_number2 = generate_random(MIN, MAX);
}

void print_dice_number(void)
{
	printf("\n");
	printf("������ ���� �ֻ��� ���� = %d\n", dice_number);
}

void print_dice_number2(void)
{
	printf("\n");
	printf("������ ���� �ֻ��� ���� = %d\n", dice_number2);
}