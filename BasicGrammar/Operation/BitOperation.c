//移位运算实现2的n次方的计算。

#include <stdio.h>

int main() 
{
    int a = 0;

    scanf("%d", &a);

    printf("%d\n", 2 << (a - 1));//因为2本身已经在第二位了，是2的1次方。
    
    return 0;
}
