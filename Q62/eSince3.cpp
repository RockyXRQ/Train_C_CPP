#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

const unsigned int STRLEN = 100;

int getLen(char*);
bool IsSelfPower(char*);

int main() {
    int times = 0;
    scanf("%d", &times);
    for (register int count = 0; count < times; count++) {
        char num[20];
        scanf(" %s", num);
        if (IsSelfPower(num)) {
            printf("%s\n", num);
        }
    }
    system("pause");
    return 0;
}

int getLen(char* num) {
    return strlen(num);
}

bool IsSelfPower(char* num) {
    bool choice = false;
    register int total = 0;
    register int realNum = atoi(num);
    register int len = getLen(num);
    while (*num) {
        total += (int) (pow(*num - '0', len) * 10 + 5) / 10;
        num++;
    }
    return choice = (realNum == total) ? 1 : 0;
}
