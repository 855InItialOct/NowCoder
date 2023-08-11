//有3门科目,考核标准是三科平均分不低于60分,编程判断是否符合标准。

#include <stdio.h>
int main() 
{
    int a, b, c, i = 1;

    scanf("%d %d %d", &a, &b, &c);

    float e = (a + b + c) / 3;
    if (e < 60)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
