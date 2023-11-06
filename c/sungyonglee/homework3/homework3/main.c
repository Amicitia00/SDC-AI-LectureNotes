#include <stdio.h>

#include "player.h"
#include "dice_game.h"
#include "random_generator.h"

int main(void)

{
	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);
	printf("\n");

	random_config();
	//roll_dice(0);
	//roll_dice(1);

	int player_each_dice_number[MAX_PLAYER_NUMBER];

	const int min = 1;
	const int max = 6;
	int i;
	int n;
	int score_player0 = 0;
	int score_player1 = 0;
	int bonus_point_player0 = 0;
	int bonus_point_player1 = 0;
	int attack_point_player0 = 0;
	int attack_point_player1 = 0;

	for (i = 0; i < 2; i++)  // ù��° �÷��̾� �ֻ��� ������
	{
		int index_first = i;
		player_each_dice_number[index_first] = generate_random(min, max);
		printf("ù��° �÷��̾ �ֻ����� �����ϴ�.\n");
		printf("\n");
		printf("�÷��̾��� %d ��° �ֻ��� ������ %d\n", index_first, player_each_dice_number[index_first]);
		int remainder;
		remainder = player_each_dice_number[index_first] % 2;
		if (remainder == 0)
		{
			printf("ù ��° �ֻ����� ¦���Դϴ�. ���ʽ� �ֻ����� �����ϴ�.\n");
			for (n = 1; n < 2; n++)
			{
				int index_second = n;
				player_each_dice_number[index_second] = generate_random(min, max);
				printf("�÷��̾��� %d ��° �ֻ��� ������ %d\n", index_second, player_each_dice_number[index_second]);
				printf("������ ȹ���մϴ�. %d\n", player_each_dice_number[index_second]);
				score_player0 += player_each_dice_number[index_second];
				if (player_each_dice_number[index_second] == 2)
				{
					bonus_point_player0 = 3;
					printf("���ʽ� ������ ȹ���մϴ�. %d\n", bonus_point_player0);
					score_player0 += bonus_point_player0 - attack_point_player1;
				}
				else if (player_each_dice_number[index_second] == 3)
				{
					attack_point_player0 = 4;
					printf("����� ������ ����ϴ�. %d\n", attack_point_player0);
					score_player1 -= attack_point_player0;
				}
				else if (player_each_dice_number[index_second] == 4)
				{
					printf("�÷��̾ �ڻ��߽��ϴ�.\n");
				}
			}
		}
		else if (remainder == 1)
		{
			printf("ù ��° �ֻ����� Ȧ���Դϴ�. ���ʽ� �ֻ����� ������ �ʽ��ϴ�.\n");
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)  // �ι�° �÷��̾� �ֻ��� ������
	{
		int index_first = i;
		player_each_dice_number[index_first] = generate_random(min, max);
		printf("�ι�° �÷��̾ �ֻ����� �����ϴ�.\n");
		printf("\n");
		printf("�÷��̾��� %d ��° �ֻ��� ������ %d\n", index_first, player_each_dice_number[index_first]);
		int remainder;
		remainder = player_each_dice_number[index_first] % 2;
		if (remainder == 0)
		{
			printf("ù ��° �ֻ����� ¦���Դϴ�. ���ʽ� �ֻ����� �����ϴ�.\n");
			for (n = 1; n < 2; n++)
			{
				int index_second = n;
				player_each_dice_number[index_second] = generate_random(min, max);
				printf("�÷��̾��� %d ��° �ֻ��� ������ %d\n", index_second, player_each_dice_number[index_second]);
				printf("������ ȹ���մϴ�. %d\n", player_each_dice_number[index_second]);
				score_player1 += player_each_dice_number[index_second];
				if (player_each_dice_number[index_second] == 2)
				{
					bonus_point_player1 = 3;
					printf("���ʽ� ������ ȹ���մϴ�. %d\n", bonus_point_player1);
					score_player1 += bonus_point_player1 - attack_point_player0;
				}
				else if (player_each_dice_number[index_second] == 3)
				{
					attack_point_player1 = 4;
					printf("����� ������ ����ϴ�. %d\n", attack_point_player1);
					score_player0 -= attack_point_player1;
				}
				else if (player_each_dice_number[index_second] == 4)
				{
					printf("�÷��̾ �ڻ��߽��ϴ�.\n");
				}
			}
		}
		else if (remainder == 1)
		{
			printf("ù ��° �ֻ����� Ȧ���Դϴ�. ���ʽ� �ֻ����� ������ �ʽ��ϴ�.\n");
		}
		printf("\n");
	}

	//	int score_player1 = score_player1 + bonus_point_player1 - attack_point_player0;

	printf("0 �� �÷��̾��� ������ %d\n", score_player0);
	printf("1 �� �÷��̾��� ������ %d\n", score_player1);
	printf("\n");

	if (score_player0 > score_player1)
	{
		printf("0 �� �÷��̾ �¸��߽��ϴ�.\n");
	}
	else if (score_player0 < score_player1)
	{
		printf("1 �� �÷��̾ �¸��߽��ϴ�.\n");
	}
	else if (score_player0 == score_player1)
	{
		printf("���º� �Դϴ�.\n");
	}

	//print_dice_number(0);
	//print_dice_number(1);


	/*
	void input(int a[], int cnt);
	{
		int a;
		printf("������ �Է��ϼ��� \n");
		printf("�� �Է� : ");
		scand("%d",a);
	}

	bool pass(int a, int cnt)
	{
		int hap = 0;
		if (a < 40) return false;
		return true;
	}
	*/


	return 0;

}