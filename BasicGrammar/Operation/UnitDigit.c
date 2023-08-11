//输入一个整数a, 求个位数。

#include <stdio.h>

int main() 
{
    int a;

    scanf("%d", &a);

    printf("%d\n", a % 10);
    
    return 0;
}
