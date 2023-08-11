//输入两个整数，范围 - 2^31~2^31 - 1，交换两个数并输出。

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;

    scanf("a=%d,b=%d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("a=%d,b=%d\n", a, b);
    
    return 0;
}
