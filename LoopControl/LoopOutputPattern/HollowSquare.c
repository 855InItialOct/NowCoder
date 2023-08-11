//BC111	打印用“*”组成的“空心”正方形图案。

#include<stdio.h>

int main() 
{
    int n = 0;

    while (scanf("%d", &n) != EOF) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (j == 0 || j == n - 1)
            {
                for (int k = 0; k < n; k++)
                    printf("* ");
                printf("\n");
            }
            else
            {
                printf("* ");
                for (int k = 0; k < n-2; k++)
                    printf("  ");
                printf("*\n");
            }
        }
    }

    return 0;
}


/*
#include<stdio.h>
void print(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        print(num);
    }
    return 0;
}
*/