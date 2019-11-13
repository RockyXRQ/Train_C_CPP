#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

const unsigned int STRLEN = 10000;

int getTotal(char*);
int getLen(char*);
bool IsSelfPower(char*);

int main() {
    char* num = (char*) malloc(STRLEN);
    printf("[eSince1]\n");
    printf("������һ�����ֽ��м��:");
    scanf("%s", num);
    printf("����������%dλ\n", getLen(num));
    printf("���������ĸ�λ��Ϊ%d\n", getTotal(num));
    printf("%s�Ƿ�Ϊ��������%d\n", num, IsSelfPower(num));
    printf("��̽���������⣬���͵ĳ���ṹ��˳��ṹ");
    free(num);
    system("pause");
    return 0;
}

int getTotal(char* num) {
    register int total = 0;
    while (*num) {
        total += (*num - '0');
        ++num;
    }
    return total;
}

int getLen(char* num) {
    return strlen(num);
}

bool IsSelfPower(char* num){
    bool choice = false;
    register int total = 0;
    register int realNum = atoi(num);
    register int len = getLen(num);
    while (*num) {
        total += (int)(pow(*num - '0',len)*10+5)/10;
        num++;
    }
    return  choice = (realNum == total) ? 1 : 0;
}

