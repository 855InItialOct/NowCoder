//有n盒酸奶,每h分钟能喝一盒，在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒？

#include <stdio.h>

int main() 
{
    int n, h, m, s = 0;

    scanf("%d %d %d", &n, &h, &m);

    for (; m > 0; s++)
        m -= h;

    printf("%d\n", n - s);
    
    return 0;
}
