//请编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。

#include <stdio.h>

int main() 
{
    char ch = 0;
    //循环读入字符
    while (scanf("%c", &ch) != EOF) 
    {
        //忽略换行符
        if (ch == '\n')
            continue;
        //统一将字符转换成大写，方便后续判断
        if (ch >= 'a' && ch <= 'z')
            ch -= 32;
        //判断是否为元音字母
        if (ch == 'A' || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    
    return 0;
}