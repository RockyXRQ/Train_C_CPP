#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch = 0;
    scanf("%c", &ch);
    if (ch < 'z' && ch > 'a') ch = ch - 32;
    getchar();
    if (ch == 'M')
        printf("����һ!\n");
    else if (ch == 'T') {
        scanf("%c", &ch);
        if (ch == 'u')
            printf("���ڶ�!\n");
        else if (ch == 'h')
            printf("������!\n");
    } else if (ch == 'W')
        printf("������!\n");
    else if (ch == 'F')
        printf("������!\n");
    else if (ch == 'S') {
        scanf("%c", &ch);
        if (ch == 'a')
            printf("������!\n");
        else if (ch == 'u')
            printf("������!\n");
    }
    system("pause");
    return 0;
}
