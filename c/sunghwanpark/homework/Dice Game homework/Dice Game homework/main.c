
/*
����� 2���� ���� �� ����ڵ��� �̸��� �����ϵ��� �����Ͻÿ�. 
������ ����� 2���� �ֻ����� ������ �ֻ����� ������ ���ڰ� ū ����� �̱⵵�� ����Ͻÿ�. 
*/

// Domain (����) �и��ϱ� - ���� ��Ȳ���� �ʿ��ϴٰ� �����Ǵ� �͵��� ������ 
// �����ϸ鼭 �ʿ��� �͵��� �������� �߰��ϸ� �ȴ�.  
// ������ ���� (Waterfall)�� ���� �̸� �� �������� �ϴµ� ���� Agile ����� ����ϸ� �ʿ����
// [ �� XP => eXtreme Programming ����� �ʿ��� => �Լ� �������� ] 
// 
// �����, �ֻ��� 
//  

#include <stdio.h>
#include "player.h"
#include "dice_game.h"
#include "random_generator.h"
#include "win.h"


int main(void)
{
// Agile ����� ���� �� ���� �߿��� �� 
// - ���� ������ ���� ������� �ϸ� ���Ѵ�. �ֻ��� �����ٸ� ���� ������ �Ѵ�. 

	// ���� �������� �ֻ��� �����ٴ� �Ʒ��� ����. (�Ҽ��� ���ٰ� �����ϸ� ��.) 
	
	// 1. �÷��̾� �̸��� �����Ѵ�. 
	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);

	// 2. �� �÷��̾���� �ֻ����� ������.  
	random_config();
	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);

	// 3. ���� �ֻ����� ������ ���� ���ڸ� �����Ѵ�. 
	check_winner(0,1);
	return 0;
}