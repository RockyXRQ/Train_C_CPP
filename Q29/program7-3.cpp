#include <stdio.h>
#include <stdlib.h>

float salaryYield, getTax(register float yield);

float *rangeList = (float[3]){3000, 2000, 2000};
float *rateList = (float[4]){0.6, 0.7, 0.9, 1.2};

int main() {
    printf("�����뱾�����õĵ�ѣ�");
    scanf("%f", &salaryYield);
    printf("��Ҫ���ɵķ���Ϊ��%.2fԪ", getTax(salaryYield));
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