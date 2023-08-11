//将浮点数转换为整数类型，要求四舍五入。

#include <stdio.h>

int main()
{
    float f = 0;
    scanf("%f", &f);
    if (f > 0)
        printf("%d\n", (int)(f + 0.5));
    else
        printf("%d\n", (int)(f - 0.5));

    return 0;
}
