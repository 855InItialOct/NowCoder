//计算1+2+2+3+3+3+....+n+n+n...+n的前k项之和。

#include <stdio.h>

int main() 
{
    int  sn = 0, k = 0, t = 0;

    scanf("%d", &k);

    for (int i = 1; i <= k; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (t == k)
                break;
            sn += i;
            t++;
        }
    }

    printf("%d\n", sn);
    
    return 0;
}
