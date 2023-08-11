//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

#include <stdio.h>

int main() 
{
    int n;
    float score = 0, max = 0, min = 1e9, sum = 0, aver = 0;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) 
    {
        scanf("%f", &score);
        if (score > max)
            max = score;
        if (score < min)
            min = score;
        sum += score;
    }
    aver = sum / n;

    printf("%.2f %.2f %.2f\n", max, min, aver);

    return 0;
}