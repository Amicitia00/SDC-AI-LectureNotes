#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include "player.h"




// ������ Ÿ�� char (1byte) <- ���ڸ� ���� �� �� ����
// �迭�� ����� ���
// -> ���� ����� ����� ������
// 1. ������ Ÿ���� ����
// 2. �迭�� �̸��� ����
// 3. ���ȣ�� ���� �迭�� ũ�⸦ �����ϴ�. ex) [PLAYER_NAME_MAX]
// 4. �ʿ��ϴٸ� �ʱ�ȭ�� �մϴ�.(�켱�� �����մϴ�)
char player_name[PLAYER_NAME_MAX];
char player1[PLAYER_NAME_MAX];
char player2[PLAYER_NAME_MAX];



void set_player_name(char name[])
{
	// string length �� ���ڷ� ���ڿ��� ���̸� ���մϴ�.
	const int player_name_length = strlen(name);

	// strncpy �� ���ڿ��� ������ ���ڸ�ŭ �����մϴ�.
	// strncpy(���� �� ��ġ, ���� �� �༮, ���� �� ����)
	//         ���� �� ������ ����(���� 1��)������ �̷�����ϴ�.
	//         �߰������� �ѱ��� �� ���ڴ� 2~3byte�� �����Ƿ� ����� �ٸ� ���ڰ� ���� �� �ֽ��ϴ�.
	strncpy(player_name, name, player_name_length + 1);
}

void set_player1(char name[])
{
	const int player1_name_length = strlen(name);
	strncpy(player1, name, player1_name_length + 1);
	
}

void set_player2(char name[])
{
	const int player2_name_length = strlen(name);
	strncpy(player2, name, player2_name_length + 1);

}



char *set_name(char name[])
{
	
	char *temp[PLAYER_NAME_MAX];
	
	const int temp_name_length = strlen(name);
	strncpy(temp, name, temp_name_length + 1);
	printf("%s\n\n\n\n",temp);
	return temp;
}


void print_player_name(void)
{
	// %s�� ���ڿ��� ��� �� �� ����մϴ�. (����)
	printf("����� �̸��� %s\n", player_name);
}