#include <stdlib.h>
#include <stdio.h>
struct Stu {
    char num[20];
    float point;
} stu1;

int main() {
    printf("[usst_student2]\n");
    printf("������ѧ����ɼ���");
    scanf("%s%f", stu1.num, &stu1.point);
    while (stu1.num[0] != '-') {
        printf("ѧ������������������룺\n");
        scanf("%s", stu1.num);
    }
    while (stu1.point > 100 || stu1.point < 0) {
        printf("�ɼ�����������������룺\n");
        scanf("%f", &stu1.point);
    }
    if (stu1.point >= 85)
        printf("����\n");
    else if (stu1.point >= 70)
        printf("����\n");
    else if (stu1.point >= 60)
        printf("�ϸ�\n");
    else
        printf("����\n");
    system("pause");
    return 0;
}