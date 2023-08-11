//从键盘输入整数x、l和r三个整数。判断x是否在l和r之间。

#include <stdio.h>

int main() 
{
    int x, l, r;

    scanf("%d %d %d", &x, &l, &r);

    if (x >= l && x <= r)
        printf("true\n");
    else
        printf("false\n");
        
    return 0;
}
