#define MAX_PLAYER_NEME_LENGTH		32

#define MAX_PLAYER_NUMBER		2

extern char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NEME_LENGTH];

// �ֻ��� �����ٸ� �����ϰ� ����� ���ϱ� ������ �ʱ� ��ȹ���� �ٸ� ���·� �ڵ尡 ����ǰ� ��
// ���� ���� ������ ���� �����ϸ� ����
void set_player_info(char[]);
void print_player_info(int);