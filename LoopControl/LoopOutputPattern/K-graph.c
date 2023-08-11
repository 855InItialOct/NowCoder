//打印用“*”组成的K形图案。

#include <stdio.h>

int main() 
{
    int a;
    
    while (scanf("%d", &a) != EOF) 
    {
        for (int i = 0; i < a + 1; i++) 
        {
            for (int j = 0; j < a - i + 1; j++)
                printf("* ");
            printf("\n");
        }
        for (int i = 0; i < a; i++) 
        {
            for (int j = 0; j < 2 + i; j++)
                printf("* ");
            printf("\n");
        }
    }

    return 0;
}
