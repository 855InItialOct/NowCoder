//编程实现求1+（1+2）+（1+2+3）+...+(1+2+3+...+n)。

#include <stdio.h>

int main() 
{
    int n = 0, tn = 0, sn = 0;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) 
    {
        tn += i;
        sn += tn;
    }

    printf("%d\n", sn);

    return 0;
}

/*
//式子中,有
//1出现了n + 1 - 1次；对1求和 = 1（n + 1 - 1）；
//2出现了n + 1 - 2次；对2求和 = 2（n + 1 - 2）；
//...
//则
//i出现了n + 1 - i次；对i求和 = i * （n + 1 - i）。

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += (i * (n + 1 - i));
    printf("%d", sum);
}
*/