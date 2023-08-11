//输入一个十进制数输出其六进制数。

#include<stdio.h>
int main() 
{
    long n, sum = 0, i = 1;

    scanf("%ld", &n);

    while (n) 
    {
        sum += n % 6 * i; //收集每次%到的数，i代表位，i=1是个位，等于10是十位
        n /= 6; //除6
        i *= 10; //下一位
    }

    printf("%ld", sum);
    
    return 0;
}