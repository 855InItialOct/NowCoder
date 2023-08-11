//双11衣服打7折，双12衣服打8折，有优惠券额外减50元（只能在双11或双12），求最终所花的钱数。

#include <stdio.h>

int main() 
{
    double price, discount, pay;
    int month, date, coupon;

    scanf("%lf %d %d %d", &price, &month, &date, &coupon);

    if (11 == month && 11 == date)
        discount = 0.7;
    else if (12 == month && 12 == date)
        discount = 0.8;
    if (1 == coupon)
        pay = price * discount - 50;
    else if (0 == coupon)
        pay = price * discount;
    if (pay <= 0)
        pay = 0;

    printf("%.2f", pay);
    
    return 0;
}