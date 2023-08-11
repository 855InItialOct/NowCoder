//整数n∈[1,20]表示n个“* ”的直角三角形直角边的长度和输出行数。多组输入，输出相应三角形。

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        for (int i = 1; i <= a; i++) 
        {
            for (int j = 0; j < i; j++)
                printf("* ");
            printf("\n");
        }
    }
    
    return 0;
}

