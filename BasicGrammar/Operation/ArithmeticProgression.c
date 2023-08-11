//输入等差数列的第一、二项 a，b，第三项是多少。

#include <stdio.h>

int main(void) 
{
    int a = 0, b = 0, c = 0;

    scanf("%d%d", &a, &b);

    c = b + (b - a);

    printf("%d", c);
    
    return 0;
}
