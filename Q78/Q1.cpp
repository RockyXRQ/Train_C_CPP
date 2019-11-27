#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int GetNum(int);
int num[20];
int main() {
    for (int count = 0; count < 20; count++) {
        num[count] = GetNum(count);
    }
    for (int count = 0; count < 20; count++) {
        printf("%5d ", num[count]);
        if (count && (count + 1) % 4 == 0) printf("\n");
    }
    system("pause");
    return 0;
}

int GetNum(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n % 2)
        return GetNum(n - 2) + GetNum(n - 1);
    else if (!(n % 2))
        return abs(GetNum(n - 2) - GetNum(n - 1));
    return 0;
}