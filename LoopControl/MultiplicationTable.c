//9*9乘法表

#include<stdio.h>

int main() 
{
    int x = 0, y = 0, i = 0, j = 0;

    for (i = 1; i < 10; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d*%d=%2d ", j, i, j * i);
        }
        printf("\n");
    }
    
    return 0;
}
