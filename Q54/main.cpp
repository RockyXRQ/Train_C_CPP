#include <stdio.h>
#include <math.h>
double tarea(float, float, float);
int main() {
    float a, b, c;
    printf("�������������ߣ�");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
        printf("��������������%.2f", tarea(a,b,c));
    else
        printf("�������߲����������Σ�\n");
    system("pause");
    return 0;
};

double tarea(float a, float b, float c)
{
    double s = (a + b + c) / 2, area;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
