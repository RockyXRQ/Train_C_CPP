#include "Prime.h"
#include "Include_List.h"
#include <math.h>
int iPrime() {
    int iNum = 1;
    printf("��������Ҫ���������ж�������:");
    scanf("%d", &iNum);
    if (iNum == 1 || iNum == 2) {
        printf("����Ϊ����");
        return 1;
    } else {
        for (register int iCounter = 2; iCounter < sqrt(iNum); iCounter++) {
            if (iNum % iCounter == 0){
                printf("����Ϊ������");
                return 0;
            }
        }
    }
    printf("����Ϊ������");
    return 1;
}