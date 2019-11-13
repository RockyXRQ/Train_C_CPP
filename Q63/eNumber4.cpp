#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const unsigned int STRLEN = 100;

int GetLen(char*);
bool IsSelfPower(char*);

int main() {
    printf("[eNumber4]\n");
    FILE* fp = fopen("number1.txt", "r");
    int times = 0;
    fscanf(fp,"%d", &times);
    for (register int count = 0; count < times; count++) {
        char* num = (char*) malloc(STRLEN);
        fscanf(fp,"%s", num);
        if (IsSelfPower(num)) {
            printf("%s£¬YES\n", num);
        } else{
            printf("%s£¬NO\n", num);
        }
        free(num);
    }
    system("pause");
    return 0;
}

int GetLen(char* num) {
    return strlen(num);
}

bool IsSelfPower(char* num) {
    bool choice = false;
    register unsigned long long total = 0;
    register unsigned long long realNum = atoll(num);
    register int len = GetLen(num);
    while (*num) {
        total += (unsigned long long) (pow(*num - '0', len) * 10 + 5) / 10;
        num++;
    }
    return choice = (realNum == total) ? 1 : 0;
}