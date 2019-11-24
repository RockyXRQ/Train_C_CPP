#include <stdio.h>
#include <stdlib.h>
#define N 5
int main() {
    int a[N], i, b;
    int f, k;
    for (i = 0; i < N; i++) scanf("%d", &a[i]);
    scanf("%d", &b);
    for (i = 0; i < N; i++) {
        if (b == a[i]) {
            f = 1;
            k = i;
        }
    }
    if (f)
        printf("b is on the %d location", k + 1);
    else
        printf("b is not in the a");

    system("pause");
    return 0;
}
