//输入10个整数，分别统计输出正数、负数的个数。

#include <stdio.h>

int main() 
{
    int a, positive = 0, negative = 0;
    
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &a);
        if (a > 0)
            positive++;
        else if (a < 0)
            negative++;
    }

    printf("positive:%d\n", positive);
    printf("negative:%d\n", negative);

    return 0;
}
