#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("������һ����ֵ���س��������\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d ��ż��", a);
    else
        printf("%d ������", a);
    system("pause");
    return 0;
}
