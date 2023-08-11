//打印用“*”组成的箭形图案。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        for (int i = 0; i < a + 1; i++) 
        {
            for (int j = 0; j < 2*(a-i); j++)
                printf(" ");
            for (int k = 0; k < i + 1; k++)
                printf("*");
            printf("\n");
        }
        for (int i = 0; i < a; i++) 
        {
            for (int j = 0; j < 2 * (i + 1); j++)
                printf(" ");
            for (int k = 0; k < a - i; k++)
                printf("*");
            printf("\n");
        }
    }
    
    return 0;
}
