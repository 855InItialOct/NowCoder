//判断输入的字符是不是字母。

#include <stdio.h>

int main() {
    int a = 0;
    while ((a = getchar()) != EOF) {
        getchar();
        if (a >= 'A' && a <= 'z')
            printf("%c is an alphabet.\n", a);
        else
            printf("%c is not an alphabet.\n", a);
    }
    return 0;
}