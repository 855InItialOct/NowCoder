//BC114	打印一个漂亮的圣诞树
/*解析：
  把每个圣诞树看成是由多个
    *
   * *
  * * *
  的小圣诞树构成
  第一行由一个*和五个空格组成
  第二行由* *与三个空格组合隔开为圣诞树的左半树
  第三行由* * * 组成，每颗*之间一个空格，循环控制打印圣诞树
  最后的树柄数量等于a，树柄的前面空格规律是3*a-1用内循环控制，外循环控制打印*作为树柄
*/

#include <stdio.h>

int main() 
{
    int a;

    while (scanf("%d", &a) != EOF) 
    {
        int i = 0, j = 0, k = 0, space = 3 * a;//三角树前的空格初始值
        
        for (i = 0; i < a; i++) 
        {
            //第一行
            for (j = space - 1; j > 0; j--)
                printf(" ");
            for (j = 0; j < i + 1; j++)
                printf("*     ");
            printf("\n");

            //第二行
            for (j = space - 2; j > 0; j--)
                printf(" ");
            for (j = 0; j < i + 1; j++)
                printf("* *   ");
            printf("\n");

            //第三行
            for (j = space - 3; j > 0; j--)
                printf(" ");
            for (j = 0; j < i + 1; j++)
                printf("* * * ");
            printf("\n");

            //下一个三角树前的空格数
            space -= 3;
        }

        //树干
        for (i = 0; i < a; i++) 
        {
            for (j = 3 * a - 1; j > 0; j--)
                printf(" ");
            printf("*\n");
        }
    }

    return 0;
}
