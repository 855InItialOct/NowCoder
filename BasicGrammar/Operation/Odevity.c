//一个数n (0 ≤ n ≤ 10^9)，如果某一位是奇数，就把它变成1，是偶数，就变成0。

#include<stdio.h>

int main(void)
{
    int n;
    int a[9] = { 0 };//定义一个数组用于存放每位数字上是奇数还是偶数
    int count = 0;//定义一个count，用于对位数进行计数
    int result = 0;
    scanf("%d", &n);
    while (n != 0)//从最后一位开始检查每一位上是奇数还是偶数，注意a[0]存放的是最后一位，得出数组后需要从数组最后一位开始计算
    {
        int m = n % 10;
        if (m % 2 == 0)
            a[count++] = 0;
        else
            a[count++] = 1;
        n = n / 10;
    }
    for (int i = count - 1; i >= 0; i--)//从数组最后一位开始计算得出的数，也就是原数的顺序来算
        result = result * 10 + a[i];
    printf("%d", result);
    
    return 0;
}

/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
    char c[10] = {};//将数字读为字符char
    cin >> c;
    int n = strlen(c);//长度
    for (int i = 0; i < n; i++)
    {
        if (c[i] % 2 == 0)//偶数为0
            c[i] = '0';
        else 
            c[i] = '1';奇数为1
    }
    int f = 0;            //做标记，找出第一个1的位置
    for (int i = 0; i < n; i++)
    {
        if (c[i] != '0')
            ++f;//不等于0就继续向前
        if (f == 0)
            continue ;
        cout << c[i];
    }
    
    if (f == 0)            //输出一个零，或者非零后的所有数字
        cout << '0' << endl;

    cout << endl;
}
*/