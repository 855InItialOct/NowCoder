//常见HTTP状态码：200（OK，请求已成功），202（Accepted，服务器已接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁止），404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），502（Bad Gateway，错误网关）。多组输入，一行，一个整数（100~600），表示HTTP状态码。针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：200 - OK202 - Accepted400 - Bad Request403 - Forbidden404 - Not Found500 - Internal Server Error502 - Bad Gateway

#include <stdio.h>

int main() 
{
    int a;

    while (~scanf("%d", &a)) 
    {
        getchar();
        switch (a) 
        {
        case 200:
            printf("OK\n");
            break;
        case 202:
            printf("Accepted\n");
            break;
        case 400:
            printf("Bad Request\n");
            break;
        case 403:
            printf("Forbidden\n");
            break;
        case 404:
            printf("Not Found\n");
            break;
        case 500:
            printf("Internal Server Error\n");
            break;
        case 502:
            printf("Bad Gateway\n");
        }
    }

    return 0;
}