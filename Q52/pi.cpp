#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double GetPi(int);

int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%lf", GetPi(n));
    system("pause");
    return 0;
}

double GetPi(int n) {
    register int power = 0;
    register int addend = 1;
    register double piOrg = 0;
    while (n) {
        piOrg += (pow(-1, power) / addend);
        addend += 2;
        ++power;
        --n;
    }
    return piOrg * 4;
}