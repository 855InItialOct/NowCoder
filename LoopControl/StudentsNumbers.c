//统计n个学生中三科成绩平均分低于60分的学生人数。

#include <stdio.h>

int main() 
{
    int n = 0, s1 = 0, s2 = 0, s3 = 0, count = 0;

    scanf("%d", &n);

    while (n--) 
    {
        scanf("%d %d %d", &s1, &s2, &s3);
        if ((s1 + s2 + s3) / 3 < 60)
            count++;
    }

    printf("%d\n", count);
    
    return 0;
}
