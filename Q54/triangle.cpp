#include <stdio.h>
#include <math.h>
double tarea(float, float, float);
int main() {
    float a, b, c;
    printf("输入三角形三边：");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
        printf("输出三角形面积：%.2f", tarea(a,b,c));
    else
        printf("输入三边不构成三角形：\n");
    system("pause");
    return 0;
};

double tarea(float a, float b, float c)
{
    double s = (a + b + c) / 2, area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
