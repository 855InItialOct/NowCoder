//输入一个整数，若能被2、3、7中哪几个数整除，按升序输出。如果不能则输出n。

#include<stdio.h>
int main() 
{
    int a;

    scanf("%d", &a);

    if (!(a % 2) || !(a % 3) || !(a % 7))
    {
        if (!(a % 2)) printf("2 ");
        if (!(a % 3)) printf("3 ");
        if (!(a % 7)) printf("7 ");
    }
    else
        printf("n ");
        
    return 0;
}
