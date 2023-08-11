//输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。

#include <stdio.h>

int main() 
{
    int a, max = 0, small = 100, sum = 0, count = 0;

    while (scanf("%d", &a) != EOF) 
    {
        if (a > max)  //判定最高分
            max = a;
        if (a < small)  //判定最低分
            small = a;
        sum += a;
        count++;//计数器
        if (count == 7) //计数器=7时代表一组的分数好了可以进行计算
        { 
            printf("%.2f\n", (sum - max - small) / 5.0);
            count = 0;//重置
            max = 0;
            small = 100;
            sum = 0;
        }
    }

    return 0;
}
