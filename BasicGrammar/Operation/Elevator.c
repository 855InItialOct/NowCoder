//电梯每次可乘12人，每次4分钟（上下各2分钟）。第1层有n个人在等电梯，多少分钟才能乘电梯到达楼上。

#include<stdio.h>

int main() 
{
    int n = 0;

    scanf("%d", &n);

    printf("%d", n / 12 * 4 + 2);
    
    return 0;
}
