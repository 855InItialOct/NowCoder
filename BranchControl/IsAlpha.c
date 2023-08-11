//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。

#include<stdio.h>
int main() 
{
    char a;
    
    while ((a = getchar()) != EOF)
    {
        getchar();
        if (a >= 'A' && a <= 'z')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
