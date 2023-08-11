//总成绩=实验*20%+课堂表现*10%+过程考核*20%+期末上机*50%，现输入各项成绩，请计算总成绩。

#include <stdio.h>

int main() 
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    float score = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;

    printf("%.1f", score);
    
    return 0;
}
