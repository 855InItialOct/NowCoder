//输入一行用空格分隔的整数a、b、c、d（0<a,b,c,d<100,000）。输出(a+b-c)*d的结果。

#include <stdio.h>

int main() 
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("%d", (a + b - c) * d);
    
    return 0;
}
