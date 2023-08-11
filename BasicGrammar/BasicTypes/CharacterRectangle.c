//用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形。

#include <stdio.h>

int main(){
    int c = 0;
    c = getchar();
    printf("%c%c%c\n", c,c,c);
    printf("%c%c%c\n", c,c,c);
    printf("%c%c%c\n", c,c,c);

    return 0;
}

/*
#include <stdio.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
*/
