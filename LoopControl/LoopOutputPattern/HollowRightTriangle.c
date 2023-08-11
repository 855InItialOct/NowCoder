//打印用“*”组成的“空心”直角三角形图案。

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
                if (j == 0 || i == n - 1 || i == j)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }

    return 0;
}