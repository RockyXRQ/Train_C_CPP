#include <stdio.h>
#include <stdlib.h>

float salaryYield, getTax(register float yield);

float *rangeList = (float[3]){10, 10};
float *rateList = (float[4]){0.1, 0.075, 0.01};

int main() {
    scanf("%f", &salaryYield);
    printf("%.3fԪ", getTax(salaryYield));
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