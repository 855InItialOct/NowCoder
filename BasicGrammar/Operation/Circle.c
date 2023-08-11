//有一个半径为 r 的圆，请你计算这个圆的面积。

#include <stdio.h>

#define PI 3.14

int main() 
{
    double r = 0;

    scanf("%lf", &r);

    printf("%.2lf\n", PI * r * r);
    
    return 0;
}
