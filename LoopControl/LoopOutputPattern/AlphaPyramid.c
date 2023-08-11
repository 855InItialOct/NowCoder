//打印用数字组成的数字金字塔图案。

#include <stdio.h>

int main() 
{
    int n = 0;

    while (scanf("%d", &n) != EOF) 
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < i + 1; j++) 
            {
                printf("%d ",j+1);
            }
            printf("\n");
        }
    }
    
    return 0;
}