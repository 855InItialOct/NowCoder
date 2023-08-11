//将一个四位数，反向输出。

#include <stdio.h>

int main() 
{
    int n;

    scanf("%d", &n);

    while (n) 
    {
        printf("%d", n % 10);
        n /= 10;
    }
    
    return 0;
}
