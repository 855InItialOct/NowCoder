//输入3科成绩，然后把三科成绩输出，成绩为整数形式。数据范围：0≤n≤100 

#include <stdio.h>

int main()
{
    int score[3] = { 0 };
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if(i<2)
            printf("score%d=%d,", i+1,score[i]);
        else
            printf("score%d=%d", i + 1, score[i]);
    }
    return 0;
}
