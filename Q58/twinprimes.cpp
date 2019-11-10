#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool IsPrime(int);

int main() {
    for (int n = 100; n + 2 < 501; n++) {
        if (IsPrime(n) && IsPrime(n + 2)) {
            printf("\t\t%d  %d\n", n, n + 2);
        }
    }
    system("pause");
    return 0;
}

bool IsPrime(int n) {
    int num = n;
    if (num == 1 || num == 2) {
        return 1;
    } else {
        for (register int counter = 2; counter < sqrt(num); counter++) {
            if (num % counter == 0) {
                return 0;
            }
        }
    }
    return 1;
}