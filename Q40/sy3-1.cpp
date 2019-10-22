#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch = 0;
    scanf("%c", &ch);
    if (ch < 'z' && ch > 'a') ch = ch - 32;
    getchar();
    if (ch == 'M')
        printf("星期一!\n");
    else if (ch == 'T') {
        scanf("%c", &ch);
        if (ch == 'u')
            printf("星期二!\n");
        else if (ch == 'h')
            printf("星期四!\n");
    } else if (ch == 'W')
        printf("星期三!\n");
    else if (ch == 'F')
        printf("星期五!\n");
    else if (ch == 'S') {
        scanf("%c", &ch);
        if (ch == 'a')
            printf("星期六!\n");
        else if (ch == 'u')
            printf("星期日!\n");
    }
    system("pause");
    return 0;
}
