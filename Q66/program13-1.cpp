#include <stdio.h>
#include <stdlib.h>

#define M 4
int main() {
    int a[M];
    int i, j, k, m;
    printf("Enter 4 number : ");
    for (i = 0; i < M; i++) scanf("%d", &a[i]);
    printf("\n\nThe result :\n\n");
    for (i = M; i > 0; i--) {
        int temp = a[M - 1];  //记录最后一个数
        for (j = M - 1; j > 0; j--) a[j] = a[j - 1]; //移位赋值
        a[0] = temp;  //将最后的数移到最前面
        for (m = 0; m < M; m++) printf("%d ", a[m]);
        printf("\n");
    }
    system("pause");
    return 0;
}
