/* GetName.cpp */

#include "GetName.h"
#include "Include_List.h"

void getName(struct Words_Malloc *str1) {
    char Stc_Temp[40];

    printf("请输入你的姓：");
    scanf("%s", &Stc_Temp[0]);
    str1->stc1 = (char *)malloc(strlen(Stc_Temp) + 1);
    strcpy(str1->stc1, Stc_Temp);

    memset(Stc_Temp, 0, 40);

    printf("请输入你的名：");
    scanf("%s", &Stc_Temp[0]);
    str1->stc2 = (char *)malloc(strlen(Stc_Temp) + 1);
    strcpy(str1->stc2, Stc_Temp);

    printf("你的姓名是：%s %s\n", str1->stc2, str1->stc1);
}

void getName_Free(struct Words_Malloc *str1) {
    free(str1->stc1);
    free(str1->stc2);
}
