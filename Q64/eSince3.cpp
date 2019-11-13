#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

const unsigned int STRLEN = 100;

int getLen(char*);
bool IsSelfPower(char*);

int main() {
    char name[10][30] = {"Single_number.txt", " ", "Daffodil_number.txt",
                    "Roses_number.txt", "Star_Number.txt"};
    srand((unsigned int) time(NULL));
    printf("[eSince3]\n");
    FILE* fp = fopen("Single_number.txt", "r");
    char tempNum[20];
    register int times = rand() % 200 + 1;
    for (;;) {
        itoa(rand(), tempNum, 10);
        if (IsSelfPower(tempNum)) {
            printf("%p\n", fp);
            fprintf(fp,"%s",tempNum);
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
