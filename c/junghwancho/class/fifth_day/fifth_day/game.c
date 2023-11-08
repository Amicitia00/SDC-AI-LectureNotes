#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

#include <stdio.h>
#include <stdbool.h>

#define FIRST_DICE_INDEX			0  // ù ��° DICE INDEX ����
#define SECOND_DICE_INDEX			1  // �� ��° DICE INDEX ����

#define BUFF_NUMBER					3  // �� ��° �ֻ����� 3�� ������ BUFF �ϵ��� ����Ϸ��� ����� ����
#define DEBUFF_NUMBER				4  // �� ��° �ֻ����� 4�� ������ DEBUFF �ϵ��� ����Ϸ��� ����� ����
#define PLAYER_DEATH				-4444  // �� ��° �ֻ����� 4�� ������ PLAYER_DEATH�� ����Ϸ��� ����� ����

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER]; // �ֻ����� ���� ���� ���� ���� �����ϱ� ���� �迭

void play_game(void) // play_game �̶�� input void output void �Լ� ����
{
	int loop; // play_game���� ����� loop��� ���� ���� ���� -> player nickname ���� �� �ݺ������� MAX_PLAYER_NUMBER�� count �ϱ� ���� ������ ����
	int current_player_index; // play_game���� ����� current_player_index ���� ���� ���� -> �ݺ������� ù ��°, �� ��° dice�� ������� ���� count �ϱ� ���� ����
	char* nickname[MAX_PLAYER_NUMBER] = { // char* �Լ��� ����Ͽ� MAX_PLAYER_NUMBER ���� �ش��ϴ� �迭 nickname ����
		"�Թ���������",
		"�ִ԰�����"
	};

	printf("����� �г��� ����\n"); // ����� �г����� ������ �Ŷ�� �ȳ� print

	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++) // �ݺ���: loop�� �̿��Ͽ� MAX_PLAYER_NUMBER�� count �ϰ�,
	{												 // �� ���� 2���� ���� �� init ���ϸ� �����Ͽ� �÷��̾� �̸� ����
		init_player_nickname(nickname[loop]); // loop�� 2���� ���� �� char*�� �� nickname�� ���� => loop�� 2���� Ŭ �� �ݺ��� ����
	}
	print_player_list(); // player.c���� ������ ��� ������ player list print

	random_seed_config(); // random.c���� ������ ��� random���� dice number�� �ʱ�ȭ ��Ŵ => ���� �� ��� �Ȱ��� �� (6) ����

	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++) // �ݺ���: current_player_index�� �̿��Ͽ� �ֻ����� ������� ������
	{																								 // ù ��° �ֻ��� ���� check_even�� ���� �� ��° �ֻ����� ���� �� �Ǵ�(¦�� ��)
		int try_count = 0; // ����� �ǹ� ���� ����
		int first_dice_number; // ù ��° �ֻ��� ���� �����ϱ� ���� ���� ����

		first_dice_number = // ù ��° �ֻ��� �� ���� ����
			player_each_dice_number[current_player_index][try_count] = roll_dice(); // roll_dice�� �����Ͽ� player_each_dice_number�� �迭�� �°� ���� �� first_dice_number�� ����ϰڴ�.

		printf("�ֻ��� ����: %d\n", first_dice_number); // ù ��° �ֻ��� �� print

		if (check_even(first_dice_number)) // ù ��° �ֻ��� ���� common.c�� ���� �� check_even���� Ȧ/¦ �Ǵ��ؼ� if �ݺ��� ����
		{
			printf("�ֻ��� ��ų�� �ߵ��մϴ�!\n"); // ����(¦��)�� �´´ٸ� �� ��° �ֻ����� ������ �� ��Ʈ print
			apply_dice_skill(current_player_index); // check_even���� input�� current_player_index�� ¦���� �� �Ʒ� apply_dice_skill function ����
		}
	}
	check_winner(); // �Ʒ� ���ǵ� check_winner fucntion ����
}



void apply_dice_skill(int current_player_index) // ���� apply_dice_skill ���� function ����
{
	int target_player_index; // ¦��, 3, 4 �� ������ �� skill�� ��� �� �� �ֵ��� ��� �� ���� ����
	int second_dice_number = roll_dice(); // ????? ���� player_each_dice_number�� �ٽ� roll_dice ���� plus = second_dice_number
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] += second_dice_number;

	printf("���� �� ��° �ֻ��� ���� = %d\n", second_dice_number); // �� ��° dice number print

	switch (second_dice_number) // switch ������ ���ǿ� �´� ��� ����
	{
	case 2:
		buff_to_current_player(current_player_index); // �� ��° �ֻ��� ���� 2�� ������ �� ����
		printf("�� ��° �ֻ��� ������ %d\n", // �� ��° �ֻ��� ���� �Բ� ��Ʈ ���
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX]);
		break;

	case 3:
		target_player_index = find_target_player(current_player_index); // ??? ���ذ� �� �� �ʿ���
		printf("��ų ���� �� ���� %d\n",
			player_each_dice_number[target_player_index][SECOND_DICE_INDEX]);
		debuff_to_target_player(target_player_index);
		printf("��ų ���� ���� ���� %d\n",
			player_each_dice_number[target_player_index][SECOND_DICE_INDEX]);
		break;

	case 4:
		player_death(current_player_index); // �� ��° �ֻ��� ���� 4�� ������ �� ����
		printf("�׾���: %d\n",
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX]);
		break;

	default:// �� 3���� ��찡 �ƴ� ��� ����
		printf("��ų ����� �Ұ��մϴ�!\n");
		break;
	}
}

void buff_to_current_player(int current_player_index) // �� ��° ���� 2�� ������ �� ����Ǵ� function
{
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] += BUFF_NUMBER; // ���ǵ� BUFF_NUMBER (3) �� player_each_dice_number�� +
}

int find_target_player(int current_player_index) // ?? ���ذ� �ʿ���
{
	// ���� ? ���ΰ�� : �����ΰ��
	// ���� ���·� �ۼ��մϴ�.
	return current_player_index ? 0 : 1;
}

void debuff_to_target_player(int target_player_index) // �� ��° ���� 3�� �� find_target_player�� �Բ� ����
{
	player_each_dice_number[target_player_index][SECOND_DICE_INDEX] -= DEBUFF_NUMBER; // ���ǵ� DEBUFF_NUMBER (4) �� player_each_number�� -
}

void player_death(int current_player_index) // �� ��° ���� 4�� �� ����
{
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] = PLAYER_DEATH; // ���ǵ� PLAYER_DEATH(-4444)�� player_each_dice_number�� ����
}

void check_winner(void) // ���� �º� �ǰ� ���
{
	int each_player_dice_sum[MAX_PLAYER_NUMBER]; // ??
	int current_player_index; // check_winner���� ��� �� ���� ���� ����
	int i; // check_winner���� ��� �� ���� ���� ����

	int death_count = 0;
	bool does_everyone_lose = false;

	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		each_player_dice_sum[current_player_index] =
			player_each_dice_number[current_player_index][FIRST_DICE_INDEX] +
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX];
	}
	for (i = 0; i < MAX_PLAYER_NUMBER; i++)
	{
		if (player_each_dice_number[i][SECOND_DICE_INDEX] == PLAYER_DEATH)
		{
			death_count++;
			printf("�÷��̾�%d ���� �й��ϼ̽��ϴ�!\n", i);
		}
	}

	if (death_count == 2) { does_everyone_lose == true; }

	if (does_everyone_lose) { return; }


	if (each_player_dice_sum[0] > each_player_dice_sum[1])
	{
		printf("0�� �÷��̾� �¸�!");
	}
	else if (each_player_dice_sum[0] < each_player_dice_sum[1])
	{
		printf("1�� �÷��̾� �¸�!");
	}
	else
	{
		printf("���º�");
	}
}
