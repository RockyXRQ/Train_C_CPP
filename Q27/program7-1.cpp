#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("请输入一个数值按回车完成输入\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d 是偶数", a);
    else
        printf("%d 是奇数", a);
    system("pause");
    return 0;
}
