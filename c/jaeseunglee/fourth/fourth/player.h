#pragma once
#define MAX_PLYAER_NAME_LENGTH	32
#define MAX_PLAYER_NUMBER 2

extern char player[MAX_PLAYER_NUMBER][MAX_PLYAER_NAME_LENGTH];

// �ֻ��� �����ٸ� �����ϰ� ����ٺ���
// ������ �ʱ� ��ȹ���� �ٸ� ���·� �ڵ尡 ������
// �׷��� ���� ������ ���� �����ϸ� �ȵ�
void set_player_info(char name[]);
void print_player_info(int index);