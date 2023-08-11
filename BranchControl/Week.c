//周一到周日的英文是Monday Tuesday Wednesday Thursday Friday Saturday Sunday，输出今天对应的星期几的英文。

#include <stdio.h>

int main() 
{
    int a;

    scanf("%d", &a);
    
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
    }

    return 0;
}