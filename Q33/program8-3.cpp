#include <stdlib.h>
#include "stdio.h"
#define PI 3.14
int main() {
    float radius, length, breadth, height, base;
    double area;
    int choice;
    printf("\n\t��״������\n");
    printf("\n\t1.������\n");
    printf("\t2.Բ��\n");
    printf("\t3.������\n");
    printf("\t4.�˳�\n");
    printf("\n\t ������ѡ��(1/2/3/4):");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("\n�����볤���ε���ϸ��Ϣ");
            printf("\n ��Ϊ :");
            scanf("%f", &length);
            printf("\n ��Ϊ :");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("\n �ó����ε����Ϊ %7.2f\n", area);
            break;
        case 2:
            printf("\n������Բ�ε���ϸ��Ϣ");
            printf("\n �뾶Ϊ :");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("\n��Բ�ε����Ϊ%7.2f\n", area);
            break;
        case 3:
            printf("\n�����������ε���ϸ��Ϣ");
            printf("\n ��Ϊ :");
            scanf("%f", &height);
            printf("\n �ױ�Ϊ :");
            scanf("%f", &base);
            area = 0.5 * height * base;
            printf("\n��������Ϊ%7.2f\n", area);
            break;
        case 4:
            printf("\n�˳�����\n");
            break;
        default:
            printf("\n ѡ�����\n");
    }
    system("pause");
    return 0;
}
