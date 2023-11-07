#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //printf function
#include <string.h> //strncpy function < user �̸� copy ���
#include "player.h"

char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH]; // MAX player, MAX player name ���� 
int current_player_set_index; // ���� play �� ���� ��ǥ, �ʱ� 0

void set_player_info(char name[]) // [] �迭�� ������ player ���� ī��Ʈ �� �̸� ����
{
	int input_player_name_length = strlen(name); // player �̸� ���� �˻�
	strncpy(player[current_player_set_index++], name, input_player_name_length + 1);
	// �˻�� �̸��� 1 byte �����ְ�, ���� player ���� ī��Ʈ
}

void print_player_info(int index)
{
	printf("player %d = %s\n", index, player[index]);
}