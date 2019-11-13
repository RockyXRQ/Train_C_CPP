#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

const unsigned int STRLEN = 100;

int getLen(char*);
bool IsSelfPower(char*);
void UI();

int main() {
    UI();
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

void UI() {
    char choice;
    char num[20];
    while ((choice = getchar()) == ' ');
    if (choice == 'S' || choice == 's') {
        scanf("%s", num);
        printf("此%d位自幂数是否存在：%d", getLen(num), IsSelfPower(num));
    } else if (choice == 'H' || choice == 'h'){
        printf("就判断自幂数呗！");
    } else if (choice == 'Q' || choice == 'q'){
        system("pause");
        exit(0);
    } else {
        printf("输入错误！");
        system("pause");
        exit(0);
    }
}
