//有一个半径为 r 的球，求这个球的体积。

#include <stdio.h>

int main() 
{
    int r;
    float v;

    scanf("%d", &r);

    v = (4.0 / 3.0) * 3.14 * r * r * r;

    printf("%.2f", v);
    
    return 0;
}
