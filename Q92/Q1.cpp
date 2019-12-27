#include <stdio.h>

struct student {
    char name[20];
    int num;
    char nation[20];
} Stu[5] = {{"张凌", 30401, "汉"},
            {"张凌", 30401, "汉"},
            {"张凌", 30401, "汉"},
            {"张凌", 30401, "汉"},
            {"张凌", 30401, "汉"}};

int main() {
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    for (i = 0; i < 5; ++i)
        if (num == Stu[i].num) {
            printf("%s", Stu[i].name);
            return 0;
        }
    printf("不存在该学生\n");
    return 0;
}