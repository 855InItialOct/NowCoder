//整数n∈[1,20]表示用“* ”组成的正方形边长和输出行数。多组输入，输出相应正方形。

#include <stdio.h>

int main() 
{
    int n;
    
    while (scanf("%d", &n) != EOF) 
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}