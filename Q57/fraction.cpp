#include <stdio.h>
#include <stdlib.h>

float getValue(int);

int main() {
    register float total = 0;
    for (register int count = 1; count < 21; ++count) {
        total += getValue(count) / getValue(count + 1);
    }
    printf("%.2f\n", total);
    system("pause");
    return 0;
}

float getValue(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return getValue(n - 2) + getValue(n - 1);
    }
}

