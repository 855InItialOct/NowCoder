//给定秒数，输出成几小时几分几秒。

#include <stdio.h>

int main() 
{
    int a, h, m, s;

    scanf("%d", &a);

    h = a / 3600;
    m = a % 3600 / 60;
    s = a % 60;

    printf("%d %d %d", h, m, s);
    
    return 0;
}
