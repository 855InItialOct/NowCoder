//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。

#include <stdio.h>

int main() 
{
    int n = 0;

    scanf("%d", &n);

    if (0 == n % 2)
        printf("%d %d", n / 2, n / 2);
    else
        printf("%d %d", n / 2 + 1, n / 2);
        
    return 0;
}
