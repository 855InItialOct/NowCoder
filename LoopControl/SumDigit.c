//求一个整数的所有位上数字之和。

#include <stdio.h>

int main() 
{
    int n, sum = 0;

    scanf("%d", &n);

    while (n) 
    {
        sum += n % 10;
        n /= 10;
    }
    
    printf("%d\n", sum);

    return 0;
}
