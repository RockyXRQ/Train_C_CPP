#include "Prime.h"
#include "Include_List.h"
#include <math.h>
int iPrime() {
    int iNum = 1;
    printf("请输入你要进行素数判定的数字:");
    scanf("%d", &iNum);
    if (iNum == 1 || iNum == 2) {
        printf("此数为素数");
        return 1;
    } else {
        for (register int iCounter = 2; iCounter < sqrt(iNum); iCounter++) {
            if (iNum % iCounter == 0){
                printf("此数为合数！");
                return 0;
            }
        }
    }
    printf("此数为素数！");
    return 1;
}