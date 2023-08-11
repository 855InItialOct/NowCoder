//打印用“*”组成的X形图案。拆分成两根斜线，i==j或i==n-i-1时输出星号，其他情况皆输出空格。

#include <stdio.h>

int main() 
{
    int n;

    while (scanf("%d", &n) != EOF) 
    {
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if ((i == j)||(j == n - i - 1))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}