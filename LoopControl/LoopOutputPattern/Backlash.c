//打印用“*”组成的反斜线形图案。

#include <stdio.h>

int main()
{
    int n = 0;
    
    while (EOF!=scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
                printf(" ");
            printf("*\n");
        }
    }

    return 0;
}
