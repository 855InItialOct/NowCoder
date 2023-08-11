//从键盘读入字符、整数、单精度浮点数各一个，按顺序输出，并用空格分隔，浮点数保留6位小数。

#include <stdio.h>

int main()
{
    char c = 0;
    int i = 0;
    float f = 0;

    scanf("%c%d%f", &c, &i, &f);
    printf("%c %d %.6f", c, i, f);
    
    return 0;
}
