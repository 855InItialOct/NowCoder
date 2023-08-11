//多组输入一个整数n∈[1~100]，输出一行n个“*”。

#include <stdio.h>

int main() 
{
    int n;

    while ((scanf("%d", &n)) != EOF) 
    {
        for (int i = 0; i < n; i++) 
        {
            printf("*");
            if (i == n - 1)
                printf("\n");
        }
    }
    
    return 0;
}