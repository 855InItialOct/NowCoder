//快递1kg内的按20元计算，超出部分每kg1元（含不足1kg），加急需额外付5元。问共要支付多少。

#include <stdio.h>

int main()
{
    double weight;
    char ch;
    int pay;

    scanf("%lf %c", &weight, &ch);
    
    if (1 >= weight)
        pay = 20;
    else
        pay = 20 + (int)(weight - 1) + ((int)weight != weight ? 1 : 0);

    printf("%d\n", pay + (('y' == ch) ? 5 : 0));
    
    return 0;
}

