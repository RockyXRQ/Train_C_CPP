#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const unsigned int STRLEN = 10000;

int GetLen(char*);
void UserInter();
bool IsSelfPower(char*);

int main() {
    printf("[eSince2]\n");
    UserInter();
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

void UserInter() {
    printf("来吧输入命令！\n");
    char* num = (char*) malloc(STRLEN);
    char choice;
    while ((choice = getchar()) == ' ')
        ;
    if (choice == 'S' || choice == 's') {
        scanf(" %s", num);
        printf("这个%d位自幂数是否存在：%d\n", GetLen(num), IsSelfPower(num));
    } else if (choice == 'H' || choice == 'h') {
        printf("就检测自幂数用呗！\n");
    } else if (choice == 'H' || choice == 'h') {
        printf("白白！\n");
        system("pause");
        exit(0);
    } else{
        printf("指令有误！\n");
        system("pause");
        exit(0);
    }
    free(num);
}