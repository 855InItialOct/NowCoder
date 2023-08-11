//从键盘任意输入一个整数表示的分数，大于等于60，是输出“Pass”，否则输出“Fail”。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        if (a >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    
    return 0;
}
