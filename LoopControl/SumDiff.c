//编程实现求1-2+3-4...+n的值。

#include<stdio.h>

int main()
{
    int n = 0;
    int sum=0,sum1=0, sum2=0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
        sum1 += i;
    for (int i = 2; i <= n; i += 2)
        sum2 += i;
    sum = sum1 - sum2;

    printf("%d", sum);
    
    return 0;
}

/*
#include <stdio.h>

int main() {
    int n = 0, i = 0, j = 0;;
    scanf("%d", &n);
    i = n / 2;
    j = n % 2;
    if (j == 0){//j=0，则n为偶数，结果为-n/2。
        printf("%d", -i);
    }
    else{//j=1，则n为奇数、n-1为偶数，前n-1个数的和为-(n-1)/2，加上n得结果值，即(n+1)/2。
        printf("%d", n - i);
    }
}
*/