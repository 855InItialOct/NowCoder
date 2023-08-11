//给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。

#include <stdio.h>

int main() 
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d %d\n", a / b, a % b);
    
    return 0;
}
