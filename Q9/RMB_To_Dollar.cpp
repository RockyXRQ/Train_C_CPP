#include "RMB_To_Dollar.h"
#include "Include_List.h"

#define RMB_TO_DOLLAR_RATE 7.0955

float Dollar_Output;

float RMB_To_Dollar() {
    float RMB_Temp;
    printf("������Ҫת��������ң�");
    scanf("%f", &RMB_Temp);
    Dollar_Output = RMB_Temp * RMB_TO_DOLLAR_RATE;
    printf("ת������Ԫ���ǣ�%.2f", Dollar_Output);
    return Dollar_Output;
}