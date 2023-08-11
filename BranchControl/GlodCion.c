//有坐标(x,y)和金币坐标(x1,y1)，当金币在（x,y）周围时，即|x1-x|+|y1-y|=1，判断金币的方位。

#include<stdio.h>
int main() 
{
    int x, y, x1, y1;

    scanf("%d %d", &x, &y);
    scanf("%d %d", &x1, &y1);

    if (x1 == x)
        y1 > y ? printf("u") : printf("d");
    else
        x1 > x ? printf("r") : printf("l");
        
    return 0;
}