#include <stdio.h>
#include <stdlib.h>

int IsTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int len = 0;
    scanf("%d", &len);
    int i1 = 0, i2 = 0;
    for (i1 = 0; i1 < len / 2; ++i1)
        for (i2 = i1; i2 < len - i1; ++i2)
            if (IsTriangle(i1, i2, len - i1 - i2) &&
                (i1 <= i2 && i2 <= len - i1 - i2))
                printf("%d %d %d\n", i1, i2, len - i1 - i2);

    system("pause");
    return 0;
}