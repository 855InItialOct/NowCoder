//有一个阻值是 r1 和一个阻值 r2 的电阻，两个电阻并联后等效电阻是多少。

#include <stdio.h>

int main() 
{
    float r1 = 0.0f, r2 = 0.0f, r3 = 0.0f;

    scanf("%f%f", &r1, &r2);

    r3 = (r1 * r2) / (r1 + r2);

    printf("%.1f", r3);
    
    return 0;
}
