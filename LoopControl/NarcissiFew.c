//输出所有在m和n范围内的水仙花数,m和n为多组输入。

#include <stdio.h>

int main() 
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF) 
    {
        int count = 0;
        for (int i = a; i <= b; i++) 
        {
            int d = i % 10, t = i / 10 % 10, h = i / 100;
            if (i == (d * d * d + t * t * t + h * h * h))
            {
                printf("%d ", i);
                count=1;
            }
        }
        if (count!=1)
                printf("no\n");
    }

    return 0;
}
