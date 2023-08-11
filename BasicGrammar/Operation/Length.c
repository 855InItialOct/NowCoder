//已知二维坐标系中有一个线段，起止两个点的坐标 (x1,y1)，(x2,y2) 。求这个线段的长度。

#include<stdio.h>
#include<math.h>    //pow(x,y) 求x的y次方    //abs(x) 求整数x的绝对值

int main() 
{
    int x1, y1, x2, y2;
    int r1, r2, r3, r4;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    r1 = abs(x1 - x2);
    r2 = abs(y1 - y2);
    r3 = pow(r1, 2);
    r4 = pow(r2, 2);

    printf("%d", sqrt(r3 + r4));
    
    return 0;
}
