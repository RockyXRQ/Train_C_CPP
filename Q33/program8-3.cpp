#include <stdlib.h>
#include "stdio.h"
#define PI 3.14
int main() {
    float radius, length, breadth, height, base;
    double area;
    int choice;
    printf("\n\t形状的类型\n");
    printf("\n\t1.长方形\n");
    printf("\t2.圆形\n");
    printf("\t3.三角形\n");
    printf("\t4.退出\n");
    printf("\n\t 请输入选项(1/2/3/4):");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("\n请输入长方形的详细信息");
            printf("\n 长为 :");
            scanf("%f", &length);
            printf("\n 宽为 :");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("\n 该长方形的面积为 %7.2f\n", area);
            break;
        case 2:
            printf("\n请输入圆形的详细信息");
            printf("\n 半径为 :");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("\n该圆形的面积为%7.2f\n", area);
            break;
        case 3:
            printf("\n请输入三角形的详细信息");
            printf("\n 高为 :");
            scanf("%f", &height);
            printf("\n 底边为 :");
            scanf("%f", &base);
            area = 0.5 * height * base;
            printf("\n该三角形为%7.2f\n", area);
            break;
        case 4:
            printf("\n退出程序\n");
            break;
        default:
            printf("\n 选项错误\n");
    }
    system("pause");
    return 0;
}
