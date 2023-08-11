//判断一个年份n是否为闰年。

#include <stdio.h>

int main() 
{
    int n;

    scanf("%d", &n);

    if (0 == n % 4 && 0 != n % 100 || 0 == n % 400)
        printf("yes\n");
    else
        printf("no\n");
        
    return 0;
}
