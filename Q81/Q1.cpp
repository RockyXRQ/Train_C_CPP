#include <stdio.h>
#include <stdlib.h>

int main() {
    register float sum = 0;
    register float max = 0;
    register float min = 11;
    printf("������7�����еĵ÷֣�\n");
    for (int count = 0; count < 7; ++count) {
        float tempValue = 0;
        scanf("%f", &tempValue);
        sum += tempValue;
        if (tempValue > max) max = tempValue;
        if (tempValue < min) min = tempValue;
    }
    float rate = 0;
    printf("�����붯�����Ѷ�ϵ����\n");
    scanf("%f", &rate);
    printf("�ö�����ʵ�÷�Ϊ��%.2f", (sum - max - min) * rate / 5 * 3);
    system("pause");
    return 0;
}