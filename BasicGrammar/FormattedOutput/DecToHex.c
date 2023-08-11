//BC17 请输出十进制整数1234对应的八进制和十六进制。

#include <stdio.h>

int main()
{
    int a = 1234;

    //printf("%#o %#x\n", a, a);
    printf("%#o %#X\n", a, a);//修饰符“#”控制前导显示
    
    return 0;
}
