#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "player1.h"


char player_name[PLAYER_NAME_MAX];

void set_player_name1(char name[])
{
	const int player_name_length = strlen(name);

	strncpy(player_name, name, player_name_length + 1);

}

void print_player_name1(void)
{
	// %s�� ���ڿ��� ����� �� ���(���� ���)
	printf("����� �̸��� %s\n", player_name);
}