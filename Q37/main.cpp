#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const unsigned int STRLEN = 10000;

int getTotal(char*);
int getLen(char*);
bool isPalindom(char*);

int main() {
    char* num = (char*) malloc(STRLEN);

    printf("������һ���������ж�:");
    scanf("%s", num);

    printf("������%dλ��\n", getLen(num));
    printf("������λ֮��Ϊ:%d��\n", getTotal(num));
    if (isPalindom(num)) {
        printf("����Ϊ��������\n");
    } else {
        printf("������Ϊ��������\n");
    }

    free(num);
    system("pause");
    return 0;
}

int getTotal(char* s) {
    register int total = 0;
    while (*s) {
        total += *s - '0';
        s++;
    }
    return total;
}

int getLen(char* s) {
    return strlen(s);
}

bool isPalindom(char* s) {
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