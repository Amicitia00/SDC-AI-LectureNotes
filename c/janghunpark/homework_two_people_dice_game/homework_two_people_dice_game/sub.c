#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void)
{
	srand(time(NULL));

	return rand() % 6 + 1;
}

int sub(void)
{
	int dice_number1;
	int dice_number2;

	char player1_name[32] = "hello";
	char player2_name[32] = "goodbye";

	dice_number1 = roll_dice();
	dice_number2 = roll_dice();

	printf("%s���� �ֻ��� ���� = %d\n", player1_name, dice_number1);
	printf("%s���� �ֻ��� ���� = %d\n", player2_name, dice_number2);

	if (dice_number1 > dice_number2)
	{
		printf("%s���� �̰���ϴ�!", player1_name);
	}
	if (dice_number1 = dice_number2)
	{
		printf("�����ϴ�!");
	}
	if (dice_number1 < dice_number2)
	{
		printf("%s���� �̰���ϴ�!", player2_name);
	}

	return 0;
}