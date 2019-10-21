#include <stdio.h>
#include <stdlib.h>

float salaryYield, getTax(register float yield);

float *rangeList = (float[6]){1500, 3000, 4500, 26000, 20000, 25000};
float *rateList = (float[7]){0.03, 0.1, 0.2, 0.25, 0.3, 0.35, 0.45};

int main() {
    printf("请输入本月所用的工资：");
    scanf("%f", &salaryYield);
    salaryYield -= 3500;
    printf("您要缴纳的税费为：%.2f元", getTax(salaryYield));

    system("pause");
    return 0;
}

float getTax(register float yield) {
    register int count = 0;
    register float fund = 0;
    if (yield <= 0) return 0;
    while (1) {
        if (yield - rangeList[count] > 0 && count <= 1) {
            fund += rangeList[count] * rateList[count];
            yield -= rangeList[count];
            count++;
        } else {
            fund += yield * rateList[count];
            break;
        }
    }
    return fund;
}
