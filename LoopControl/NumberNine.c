//统计9~2019之间有多少个带9的数。

#include <stdio.h>

int main() 
{
    int count = 0;

    for (int i = 9; i <= 2019; i++)
    {
        int t = i ;
        while (t>0)
        {
            if (9 == t%10)
            {
                count++;
                break;
            }
            else
                t /= 10;
        }
    }
    
    printf("%d", count);

    return 0;
}