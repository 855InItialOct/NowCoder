//依次输入一个学生的学号，以及3科成绩，在屏幕上输出。

#include <stdio.h>

struct Student
{
    int number;
    float score[3];
}stu;
int main()
{
    scanf("%d;", &stu.number);
    for (int i = 0; i < 3; i++)
    {
        scanf("%f,", &stu.score[i]);
    }
    printf("The each subject score of No.%d is %.2f,%.2f,%.2f.", stu.number, stu.score[0], stu.score[1], stu.score[2]);
    return 0;
}
