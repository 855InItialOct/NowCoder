//输入一个整数，求其十位数。

#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    printf("%d\n", a / 10 % 10);
    
    return 0;
}
