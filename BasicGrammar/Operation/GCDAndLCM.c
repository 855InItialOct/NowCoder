//求两个正整数的最大公约数与最小公倍数之和。

#include <stdio.h>

int main() 
{
    long long a, b, t, max = 0, min = 0, mul = 0;

    scanf("%lld %lld", &a, &b);

    mul = a * b;
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    max = a;
    min = mul / max;

    printf("%lld\n", max + min);
    
    return 0;
}
