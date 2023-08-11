//BC20 输入一个十六进制数和一个八进制数，十进制输出（结果范围-2^31~2^31-1）。

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%x%o", &a, &b);
    printf("%d\n", a + b);
    
    return 0;
}
