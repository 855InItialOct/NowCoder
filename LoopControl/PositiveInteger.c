//一个正整数n，若为偶数，则除以2，若为奇数，则乘3加1。重复运算后，结果一定为1，求重复的次数。

#include <stdio.h>

int main() 
{
    int n = 0, count = 0;

    scanf("%d", &n);

    while (n) 
    {
        if (0 == n % 2) 
        {
            n /= 2;
            count++;
        }
        else 
        {
            n = n * 3 + 1;
            count++;
        }
        if (1 == n) 
        {
            printf("%d\n", count);
            break;
        }
    }
    
    return 0;
}
