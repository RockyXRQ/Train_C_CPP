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
    printf("�����������\n");
    char* num = (char*) malloc(STRLEN);
    char choice;
    while ((choice = getchar()) == ' ')
        ;
    if (choice == 'S' || choice == 's') {
        scanf(" %s", num);
        printf("���%dλ�������Ƿ���ڣ�%d\n", GetLen(num), IsSelfPower(num));
    } else if (choice == 'H' || choice == 'h') {
        printf("�ͼ�����������£�\n");
    } else if (choice == 'H' || choice == 'h') {
        printf("�װף�\n");
        system("pause");
        exit(0);
    } else{
        printf("ָ������\n");
        system("pause");
        exit(0);
    }
    free(num);
}