//读入3个整数，把后两个数字占 8 个空格的宽度靠右对齐输出。

#include <stdio.h>

int main() 
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    printf("%d%8d%8d\n", a, b, c);
    
    return 0;
}