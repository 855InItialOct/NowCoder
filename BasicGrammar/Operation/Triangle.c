//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s;
    while (1)//循环语句
    {
        scanf("%f%f%f", &a, &b, &c);//输入三角形三条边
        if (a <= 0 || b <= 0 || c <= 0)//判断三角形三条边是否大于0
        {
            printf("输入错误,请重新输入：>");
        }
        else
        {
            if ((a + b >= c && fabs(a - b) < c) || (a + c >= b && fabs(a - c) < b) || (b + c >= a && fabs(b - c) < a))//判断能否构成三角形
            {
                float p = (a + b + c) / 2;
                s = (float)(sqrt(p * (p - a) * (p - b) * (p - c)));
                printf("circumference=%.2f area=%.2f\n", a + b + c, s);
                break;//跳出循环
            }
            else
                printf("输入不构成三角形,请重新输入：>");
        }
    }
    
    return 0;
}
