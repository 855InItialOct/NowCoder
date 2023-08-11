//实现字母的大小写转换。多组输入输出。

#include <stdio.h>

int main()
{
    char ch = 0;
    
    while ((ch = getchar()) != EOF)
    {
        getchar();//多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。
        putchar(ch + 32);
        putchar(10);
    }

    return 0;
}