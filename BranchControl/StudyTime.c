//计划y年m月d日开始学习，一旦开始就不会停，请判断y1年m1月d1日应该学习吗。

#include <stdio.h>
int main() 
{
    int a, b, c, x, y, z;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &x, &y, &z);

    if (x < a || (x == a && y < b) || (x == a && y == b && z < c))
        printf("no");
    else
        printf("yes");
    
    return 0;
}
