#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const unsigned int STRLEN = 10000;

bool IsPalindom(char*);

int main() {
    char* num = (char*) malloc(STRLEN);
    printf("������һ���������ж�:");
    scanf("%s", num);
    if (IsPalindom(num)) {
        printf("����Ϊ��������\n");
    } else {
        printf("������Ϊ��������\n");
    }

    free(num);
    system("pause");
    return 0;
}
bool IsPalindom(char* s) {
    register int head = 0;
    register int end = strlen(s) - 1;
    while (s[head]) {
        if (s[head] != s[end]) {
            return 0;
        }
        head++;
        end--;
    }
    return 1;
}