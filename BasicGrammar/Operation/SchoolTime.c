//原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？

#include <stdio.h>

int main() 
{
    int a, b;

    scanf("%d %d", &a, &b);

    //使两数之和小于13,用7取余的结果恒少1,加1可避免星期天为0的情况
    printf("%d\n", (a + b-1) % 7+1);
    
    return 0;
}
