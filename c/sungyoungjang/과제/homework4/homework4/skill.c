#include <stdio.h>
#include "skill.h"
#include "player.h"


void skill(int index, int first_dice, int* player_scores)
{
    random_config();
    int first_dice = roll_dice(0);
    int fitst_dice = roll_dice(1);
    
    if (first_dice % 2 == 0)
    {
       
        int second_dice = roll_dice(index);
        printf("%d �� �÷��̾��� �� ��° �ֻ��� ������ %d\n", index, second_dice);
        if (second_dice == 2)
        {
            printf("%d �� �÷��̾��� �� ��° �ֻ����� 2�� ���Խ��ϴ�. �ڽ��� �ֻ����� 3�� ���մϴ�.\n", index);
            player_scores[index] += 3;
        }
        else if (second_dice == 4)
        {
            printf("%d �� �÷��̾��� �� ��° �ֻ����� 4�� ���Խ��ϴ�. �÷��̾ ���ӿ��� Ż���մϴ�.\n", index);
            
        }
        else if (second_dice == 3)
        {
            printf("%d �� �÷��̾��� �� ��° �ֻ����� 3�� ���Խ��ϴ�. ����� ������ -4�� �����մϴ�.\n", index);
            int score_index = (index == 0) ? 1 : 0;
            player_scores[score_index] -= 4;
        }
    }
   
    else
    {
        printf("%d �� �÷��̾��� ù ��° �ֻ����� Ȧ���̹Ƿ� �� ��° �ֻ����� ���� �� �����ϴ�.\n", index);
    }
}






