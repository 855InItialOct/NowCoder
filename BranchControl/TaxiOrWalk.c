//有走路和打车两种选择。走路速度是1m/s，打车是10m/s，但打车需等10s，想尽快到应该选择哪种。

#include<stdio.h>
int main() 
{
    unsigned int a;
    float taxi;

    scanf("%d", &a);

    taxi = a / 10 + 10;

    printf("%c", a < taxi ? 'w' : 'v');
    
    return 0;
}