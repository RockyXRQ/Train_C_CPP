#include "Prime.h"
#include "Include_List.h"

int iPrime() {
    register int iNum = 1;
    printf("��������Ҫ���������ж�������:");
    scanf("%d", &iNum);
    register bool b1_Num = true;
    register bool bMid = false;

    if (iNum == 1 || iNum == 2) {
        printf("����Ϊ����");
        return 0;
    } else {
        for (register int iCounter = 2; iCounter < iNum; iCounter++) {
            if (iNum % iCounter == 0) bMid = true;
        }
    }
    if (b1_Num && bMid)
        printf("����Ϊ����");
    else
        printf("����Ϊ����");
    return 0;
}