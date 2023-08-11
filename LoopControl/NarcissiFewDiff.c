//求出5位数中的所有变种水仙花数（一个数拆分成两个一组后相乘，各组乘积相加后等于原数）。

#include <stdio.h>

int main() 
{
    for (int i = 10000; i < 100000; i++) 
    {
        int sum = 0;
        for (int j = 10; j <= 10000; j *= 10)
            sum += (i / j) * (i % j);
        if (i == sum)
            printf("%d ", i);
    }

    return 0;
}