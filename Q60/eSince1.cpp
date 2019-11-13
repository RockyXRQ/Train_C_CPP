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
    printf("������һ�����ֽ��м��:");
    scanf("%s", num);
    printf("����������%dλ\n", GetLen(num));
    printf("���������ĸ�λ��Ϊ%d\n", GetTotal(num));
    printf("%s�Ƿ�Ϊ��������%d\n", num, IsSelfPower(num));
    printf("��̽���������⣬���͵ĳ���ṹ��˳��ṹ");
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

