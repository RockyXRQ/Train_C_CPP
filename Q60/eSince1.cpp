#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const unsigned int STRLEN = 10000;

int GetTotal(char*);
int GetLen(char*);
bool IsSelfPower(char*);

int main() {
    char* num = (char*) malloc(STRLEN);
    printf("[eSince1]\n");
    printf("请输入一个数字进行检测:");
    scanf("%s", num);
    printf("该自幂数是%d位\n", GetLen(num));
    printf("该自幂数的各位和为%d\n", GetTotal(num));
    printf("%s是否为自幂数：%d\n", num, IsSelfPower(num));
    printf("编程解决以上问题，典型的程序结构是顺序结构");
    free(num);
    system("pause");
    return 0;
}

int GetTotal(char* num) {
    register int total = 0;
    while (*num) {
        total += (*num - '0');
        ++num;
    }
    return total;
}

int GetLen(char* num) {
    return strlen(num);
}

bool IsSelfPower(char* num){
    bool choice = false;
    register unsigned long long total = 0;
    register unsigned long long realNum = atoll(num);
    register int len = GetLen(num);
    while (*num) {
        total += (unsigned long long)(pow(*num - '0',len)*10+5)/10;
        num++;
    }
    return  choice = (realNum == total) ? 1 : 0;
}

