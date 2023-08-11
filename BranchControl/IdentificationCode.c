//编程判断输入的ISBN识别码，如果正确，输出“Right”；如果错误，请输出正确的ISBN号码。

#include<stdio.h>
int main() 
{
    char arr[13];   //存放13位的ISBN
    int i, j, s = 0;

    scanf("%s", arr);

    for (i = 0, j = 1; i < 11; i++) 
    {
        if (arr[i] != '-') 
        {
            s += (arr[i] - '0') * j; //将字符换成int累加：0×1+6×2+……+2×9=158
            j++;  //执行if的时候加，不执行不加
        }
    }

    int m = s % 11;  //最后一位识别码
    if (m == arr[12] - '0' || (m == 10 && arr[12] == 'X')) 
    {
        printf("Right\n");
    }
    else 
    {
        if (m == 10) 
        {
            for (i = 0; i < 12; i++) 
            { //输出前12位
                printf("%c", arr[i]);
            }
            printf("X");
        }
        else 
        {
            for (i = 0; i < 12; i++) 
            { //输出前12位
                printf("%c", arr[i]);
            }
            printf("%d", m);
        }
    }

    return 0;
}
