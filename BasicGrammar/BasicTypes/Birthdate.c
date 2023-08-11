//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。

#include <stdio.h>

int main()
{
    int year=0, month=0, date=0;
    
    scanf("%4d%2d%2d", &year, &month, &date);
    printf("year=%02d\nmonth=%02d\ndate=%02d\n", year, month, date);

    return 0;
}
