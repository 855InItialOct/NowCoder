//输入一个字符，输出该字符相应的ASCII码。
/*
#include <stdio.h>

int main() {
    char c;
    printf("请输入一个字符：");
    scanf("%c", &c);
    printf("该字符的ASCII码是：%d\n", c);
    return 0;
}
*/

#include <stdio.h>

int main()
{
    char ch = getchar();
    printf("%d\n", ch);

    return 0;
}
