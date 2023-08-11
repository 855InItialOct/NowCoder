//计算自然数1~n的求和结果。

#include <stdio.h>

int main()
{
    long long n = 0;

    scanf("%lld", &n);

    long long sum = 0;

    sum = (1 + n) * n / 2;
    
    printf("%lld\n", sum);

    return 0;
}
