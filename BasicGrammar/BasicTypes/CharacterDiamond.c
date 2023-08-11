//用键盘读入一个字符，然后在屏幕上显示一个用这个字符填充的对角线长5个字符，倾斜放置的菱形。
/*
#include <stdio.h>

int main()
{
    char c;  // 定义字符变量c

    printf("请输入一个字符: ");  // 提示用户输入一个字符
    scanf("%c", &c);  // 读取用户输入的字符，并存储到变量c中

    int i, j;  // 定义变量i和j，用于控制循环

    // 打印上半部分的菱形
    for (i = 1; i <= 5; i++) {  // 外层循环控制行数，从第1行打印到第5行
        for (j = 1; j <= 5 - i; j++) {  // 内层循环控制空格数，每行空格数递减，从4个打印到0个
            printf(" ");  // 打印空格
        }
        for (j = 1; j <= 2 * i - 1; j++) {  // 内层循环控制字符数，每行字符数递增，从1个打印到9个
            printf("%c", c);  // 打印用户输入的字符
        }
        printf("\n");  // 打印换行符
    }

    // 打印下半部分的菱形
    for (i = 4; i >= 1; i--) {  // 外层循环控制到第1行
        for (j = 1; j <= 5 - i; j++) { // 内层循环控制空格数，每行空格数递增，从1个打印到4个
            printf(" "); // 打印空格
        }
        for (j = 1; j <= 2 * i - 1; j++) { // 内层循环控制字符数，每行字符数递减，从9个打印到1个
            printf("%c", c); // 打印用户输入的字符
        }
        printf("\n"); // 打印换行符
    }
    return 0;  // 程序结束，返回0表示执行成功
}
*/

#include <stdio.h>

int main()
{
    char ch;
    int row = 0, col = 0, line = 0;
    printf("Please enter the rows:");
    scanf("%d", &line);
    getchar();
    printf("Please enter a character:");
    ch= getchar();
    for ( row = 1; row <= line; row++)
    {
        for (col = 1; col <= line - row; col++)
            printf(" ");
        for ( col = 1; col <= row*2-1; col++)
            printf("%c", ch);
        printf("\n");
    }
    for (row = 1; row <= line-1; row++)
    {
        for (col = 1; col <= row; col++)
            printf(" ");
        for (col = 1; col <= 2 * (line-1 - row) + 1; col++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
