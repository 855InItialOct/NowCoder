//输出十六进制整数ABCDEF对应的十进制整数，所占域宽为15。

#include <stdio.h>

int main()
{
    int a = 0xABCDEF;
    
    printf("%15d\n", a);

	return 0;
}

/*
int i, n;
char s[] = "ABCDEF";
n = 0;
for (i = 0; s[i] != '\0'; i++)
{
    if (s[i] >= '0' && s[i] <= '9')
        n = n * 16 + s[i] - '0';
    if (s[i] >= 'a' && s[i] <= 'f')
        n = n * 16 + s[i] - 'a' + 10;
    if (s[i] >= 'A' && s[i] <= 'F')
        n = n * 16 + s[i] - 'A' + 10;
}
*/
