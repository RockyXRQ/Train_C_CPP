#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const unsigned int STRLEN = 10000;
bool isPalindom(char*);

int main() {
    char* num = (char*) malloc(STRLEN);
    printf("请输入一个数进行判断:");
    scanf("%s", num);
    if (isPalindom(num)) {
        printf("此数为回文数。\n");
    } else {
        printf("此数不为回文数。\n");
    }

    free(num);
    system("pause");
    return 0;
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