//编程输出方程ax²+bx+c=0的根，a，b，c从键盘输入，a=0时，输出“Not quadratic equation”。

#include <stdio.h>
#include <math.h>

int main() 
{
    float a = 0,b = 0,c = 0;

    while (scanf("%f %f %f", &a, &b, &c) == 3) 
    {
        if (a == 0) 
        {
            printf("Not quadratic equation.\n");
        }
        else 
        {
            float disc = b * b - 4 * a * c;
            if (disc >= 0) 
            {
                float x1 = (-b + sqrt(disc)) / (2 * a);
                float x2 = (-b - sqrt(disc)) / (2 * a);
                if (disc > 0) 
                {
                    printf("x1=%.2f;x2=%.2f\n", x2, x1);
                }
                else 
                {
                    if (x1 == 0) 
                    {
                        printf("x1=x2=0.00\n");
                    }
                    else 
                    {
                        printf("x1=x2=%.2f\n", x1);
                    }
                }
            }
            else 
            {
                float realpart = (-b) / (2.0 * a);
                float imagepart = (sqrt(-disc)) / (2.0 * a);
                if (imagepart < 0) 
                {
                    imagepart = -imagepart;
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", realpart, imagepart, realpart, imagepart);
                }
                else 
                {
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", realpart, imagepart, realpart, imagepart);
                }
            }
        }
    }
    
    return 0;
}
