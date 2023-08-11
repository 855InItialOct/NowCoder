//打印用“*”组成的翻转直角三角形图案。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        for (int i = 1; i <= a; i++) 
        {
            for (int j = a - i; j >= 0; j--) 
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    
    return 0;
}