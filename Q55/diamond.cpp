#include <stdio.h>
#include <stdlib.h>
void a(int i) {
    int j, k;
    for (j = 1; j <= 30 - i; j++) printf("%c", ' ');
    for (k = 1; k <= 2 * i - 1; k++) printf("%c", 'A' + i - 1);
    printf("\n");
}
int main() {
    int i, n = 10;
    for (i = 1; i <= n; i++) a(i);
    for (i = 9; i >= 1; i--) a(i);
    system("pause");
    return 0;
}
