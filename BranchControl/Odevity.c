//从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        if (0 == a % 2)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    
    return 0;
}
