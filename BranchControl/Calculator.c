//实现一个简单计算器

#include<stdio.h>

int main() 
{
    char op;
    double op1, op2;

    while (~scanf("%lf%c%lf", &op1, &op, &op2)) 
    {
        if (op != '+' && op != '-' && op != '*' && op != '/')
            printf("Invalid operation!\n");
        else if (op == '/') 
        {
            if (op2 == 0.0) printf("Wrong!Division by zero!\n");
            else printf("%.4f/%.4f=%.4f\n", op1, op2, op1 / op2);
        }
        else 
        {
            if (op == '+') printf("%.4f+%.4f=%.4f\n", op1, op2, op1 + op2);
            if (op == '-') printf("%.4f-%.4f=%.4f\n", op1, op2, op1 - op2);
            if (op == '*') printf("%.4f*%.4f=%.4f\n", op1, op2, op1 * op2);
        }
    }

    return 0;
}

/*
#include <stdio.h>
int main() {
    char opera[4] = {'0'}; //程序中的%s输入一个字符数组，末尾自动加一个“\0”，数组空间+1
    scanf("%s", opera);
    switch (opera[1]) {
    case '+':
        printf("%d\n", (opera[0] - '0') + (opera[2] - '0'));
        break;
    case '-':
        printf("%d\n", (opera[0] - '0') - (opera[2] - '0'));
        break;
    case '*':
        printf("%d\n", (opera[0] - '0') * (opera[2] - '0'));
        break;
    case '/':
        if ('0' == opera[2])
        {
            printf("Wrong!Division by zero!\n");
            break;
        }
        else
        {
            printf("%d\n", (opera[0] - '0') / (opera[2] - '0'));
            break;
        }
    default:
        printf("Ivalid operation!\n");
    }

    return 0;
}
*/
