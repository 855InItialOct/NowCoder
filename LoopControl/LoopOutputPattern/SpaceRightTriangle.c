//打印用“*”组成的带空格直角三角形图案。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        for (int i = 0; i < a; i++) 
        {
            for (int j = 0; j < a - i - 1; j++)
                printf("  ");
            for (int k = 0; k < i + 1; k++)
                printf("* ");
            printf("\n");
        }
    }
    
    return 0;
}