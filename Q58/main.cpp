#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool iPrime(int);

int main() {
    for (int n = 100; n + 2 < 501; n++) {
        if (iPrime(n) && iPrime(n + 2)) {
            printf("\t\t%d  %d\n", n, n + 2);
        }
    }
    system("pause");
    return 0;
}

bool iPrime(int n) {
    int iNum = n;
    if (iNum == 1 || iNum == 2) {
        return 1;
    } else {
        for (register int iCounter = 2; iCounter < sqrt(iNum); iCounter++) {
            if (iNum % iCounter == 0) {
                return 0;
            }
        }
    }
    return 1;
}