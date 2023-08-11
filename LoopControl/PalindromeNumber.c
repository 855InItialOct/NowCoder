//回文数是正着读与倒着读都一样的数,输出不超过n的正整数中所有回文数。

#include <stdio.h>

int main() 
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int t = 0, num = i;
        while (num > 0) 
        {
            t = t * 10 + num % 10;
            num /= 10;
        }
        if (t == i)
            printf("%d\n", i);
    }
    
    return 0;
}
