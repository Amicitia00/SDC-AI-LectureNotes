#define _CRT_SECURE_NO_WARNINGS
#include "player.h"
#include <string.h>
#include <stdio.h>

// �迭�� ������ index 0������ ���۵ȴ�. 
//���� ��� -> ������� �ڵ忡���� �õ��� �޸𸮿� ����(Dimension) ������ ����. 
// �׷��� ������ �迭�̶�� ǥ�����ٴ� �ٺ� �ְ� '���� �迭'�̶�� ǥ���� �´�. 
char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);

	strncpy(player[current_player_set_index++], name, input_player_name_length + 1);
	
}

void print_player_info(int index)
{
	printf("����� %d �� �̸���: %s\n", index+1, player[index]);
}


