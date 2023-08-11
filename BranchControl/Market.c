//商场促销活动：满100打9折；满500打8折；满2000打7折；满5000打6折,应该付多少钱。

#include <stdio.h>

int main() 
{
    float money;

    scanf("%f", &money);
    
    if (money >= 5000) 
    {
        money = 0.6 * money;
    }
    else if (money >= 2000) 
    {
        money = 0.7 * money;
    }
    else if (money >= 500) 
    {
        money = 0.8 * money;
    }
    else if (money >= 100) 
    {
        money = 0.9 * money;
    }

    printf("%.1f", money);

    return 0;
}
