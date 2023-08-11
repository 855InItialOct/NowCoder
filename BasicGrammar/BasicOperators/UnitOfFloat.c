//给定一个浮点数，要求得到该浮点数的个位数。

#include <stdio.h>

int main() 
{
    float a;

    scanf("%f", &a);

    printf("%d\n", (int)a % 10);
    
    return 0;
}
