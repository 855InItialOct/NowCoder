//BC115 超级圣诞树
/*
    把圣诞树分两个部分 三角形和枝干  难住我挺久的
    先直接定义第一个小的三角形数组；
    再把第一个复制到下面两个；
    再清空第一个三角形；把1-3行的位置中间复制成刚复制下去的其中一个；
    打印枝干。
    行号 3*（2^n-1）
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int n;

    scanf("%d", &n);

    char ch[200][400] = { "  *  ", " * * ", "* * *" };

    int i, j, k;
    int row = 3;
    int col = 5;

    //判断需要复制几次三角形
    for (i = 0; i < n - 1; i++) 
    {
        //判断需要复制几行
        for (j = 0; j < row; j++) 
            //判断每行需要复制几列
            for (k = 0; k < col; k++) 
            {
                //第一个三角形第一行全部复制完成
                ch[j + row][k] = ch[j][k]; 
                //第二个三角形第一行复制完成
                ch[j + row][k + 1 + col] = ch[j][k]; 
            }

        //三角形原来的位置清空
        for (j = 0; j < row; j++) 
        { 
            for (k = 0; k < col; k++)
                ch[j][k] = ' ';
        }

        //前面空白中间部分复制一个左下角的三角形上来
        for (j = 0; j < row; j++) 
        { 
            for (k = 0; k < col; k++)
                ch[j][k + row] = ch[j + row][k];
        }

        row *= 2;
        col = 2 * col + 1;
    }

    //打印所有三角形
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++)
            if (ch[i][j] == '*')
                printf("%c", ch[i][j]);
            else
                printf(" ");
        printf("\n");
    }

    //打印枝干
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < row - 1; j++)
            printf(" ");
        printf("*\n");
    }

    return 0;
}
