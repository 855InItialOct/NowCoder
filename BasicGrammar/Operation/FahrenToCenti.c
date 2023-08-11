//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)

#include <stdio.h>

int main() 
{
    double f, c;

    scanf("%lf", &f);

    printf("%.3f", 5.0 / 9 * (f - 32));

    return 0;
}
