#include <stdlib.h>
#include <stdio.h>
struct Stu {
    char num[20];
    float point;
} stu1;

int main() {
    printf("[usst_student2]\n");
    printf("请输入学号与成绩：");
    scanf("%s%f", stu1.num, &stu1.point);
    while (stu1.num[0] != '-') {
        printf("学号输入错误请重新输入：\n");
        scanf("%s", stu1.num);
    }
    while (stu1.point > 100 || stu1.point < 0) {
        printf("成绩输入错误请重新输入：\n");
        scanf("%f", &stu1.point);
    }
    if (stu1.point >= 85)
        printf("优秀\n");
    else if (stu1.point >= 70)
        printf("良好\n");
    else if (stu1.point >= 60)
        printf("合格\n");
    else
        printf("补课\n");
    system("pause");
    return 0;
}