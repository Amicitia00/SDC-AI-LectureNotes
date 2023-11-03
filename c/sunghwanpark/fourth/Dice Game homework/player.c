#define _CRT_SECURE_NO_WARNINGS // Windows ���� �̽� ������ ����. 
#include "player.h"
#include <string.h>
#include <stdio.h>

// �迭�� ������ index 0������ ���۵ȴ�. 
//���� ��� -> ������� �ڵ忡���� �õ��� �޸𸮿� ����(Dimension) ������ ����. 
// �׷��� ������ �迭�̶�� ǥ�����ٴ� �ٺ� �ְ� '���� �迭'�̶�� ǥ���� �´�. 

//�Ʒ� �ڵ�� player[2][32] ���·� �����ȴ�. 
// �׷��Ƿ� 32�� ¥���� 2�� �ִٴ� ���� �ȴ�. 
char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

// ex) test[3][2][10]
//		���� ���´� 10���� ������ 2�� �ִ�. 
//		��, 20��¥�� ������ �ȴ�.
//		�� 20��¥�� ������ 3�� �ִٴ� ���� �ȴ�. 
//		��������� �� 60���� ������ ������ ��. 

void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);
	// player[2][32]���� current_player_set_index�� ���ؼ� 0��, 1���� �����ϰ��� �ϴ� ���� 
	strncpy(player[current_player_set_index++], name, input_player_name_length + 1);
	
}

void print_player_info(int index)
{
	printf("����� %d �� �̸���: %s\n", index+1, player[index]);
}


