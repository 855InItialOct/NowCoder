//BMI指数是用体重（kg）除以身高（m）的平方得出的数字,正常为18.5～23.9。编程判断人体健康情况。

#include <stdio.h>

int main() 
{
    double weight, height, BMI;

    scanf("%lf %lf", &weight, &height);
    
    BMI = weight / (height * height);
    if (18.5 <= BMI && 23.9 >= BMI)
        printf("Normal\n");
    else
        printf("Abnormal\n");

    return 0;
}
