//单位阶跃函数

#include <stdio.h>
int main() 
{
    float t;
    
    while (~scanf("%f", &t)) 
    {
        getchar();
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }

    return 0;
}
