#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[101], i, j, n = 0;
    for (i = 1; i <= 100; i++)  //��1~100��������a[1]~a[100]��
        a[i] = i;
    for (i = 2; i <= 100; i++)  //�����з�������Ϊ0
        for (j = i - 1; j > 1; j--)
            if (a[i] % j == 0) a[i] = 0;
    for (i = 1; i <= 100; i++)
        if (a[i]) {
            printf("%5d", a[i]);
            n++;
            if (n % 5 == 0) printf("\n");
        }
    system("pause");
    return 0;
}
