//编程实现求1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值

#include <stdio.h>

int main() 
{
    int n = 0;

    scanf("%d", &n);

    double sum = 0, sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (0 != i % 2)
            sum1 += 1.0 / i;
        else
            sum2 += 1.0 / i;
    }
    sum = sum1 - sum2;

    printf("%.3f", sum);
    
    return 0;
}
