//设定一个闹钟,输入现在的时刻以及要睡的时长k（单位：minute）输出闹钟应该设定的时刻。

#include <stdio.h>

int main() 
{
    int hour = 0, minutes = 0, time = 0;

    scanf("%d %d %d", &hour, &minutes, &time);

    printf("%02d:%02d\n", ((hour + (time + minutes) / 60) % 24),
        (time + minutes) % 60);
    
    return 0;
}
