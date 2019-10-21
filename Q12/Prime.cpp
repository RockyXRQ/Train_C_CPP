#include "Prime.h"
#include "Include_List.h"

int iPrime() {
    register int iNum = 1;
    printf("请输入你要进行素数判定的数字:");
    scanf("%d", &iNum);
    register bool b1_Num = true;
    register bool bMid = false;

    if (iNum == 1 || iNum == 2) {
        printf("此数为素数");
        return 0;
    } else {
        for (register int iCounter = 2; iCounter < iNum; iCounter++) {
            if (iNum % iCounter == 0) bMid = true;
        }
    }
    if (b1_Num && bMid)
        printf("此数为合数");
    else
        printf("此数为素数");
    return 0;
}