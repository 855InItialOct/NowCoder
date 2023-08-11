//3～5月为春季，6～8月为夏季，9～11月为秋季，12月～来年2月为冬季。输入月份，输出对应的季节。

#include <stdio.h>

int main() 
{
    int a, b;

    scanf("%4d%2d", &a, &b);
    
    if (b >= 3 && b <= 5)
        printf("spring");
    else  if (b >= 6 && b <= 8)
        printf("summer");
    else if (b >= 9 && b <= 11)
        printf("autumn");
    else
        printf("winter");

    return 0;
}
