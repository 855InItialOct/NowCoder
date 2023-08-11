//一年约有 3.156×10^7s，要求输入您的年龄，显示该年龄合多少秒。

#include <stdio.h>

int main() 
{
    int age = 0;

    scanf("%d", &age);

    printf("%d0000\n", age * 3156);//防止溢出,令时间为3156，计算结果后补四个0
    
    return 0;
}
