#include <stdio.h>
#include <stdlib.h>

int fir, sec, thi, fou;
int temp_1, temp_2;
int biggest(int fir_input, int sec_input, int thi_input, int fou_input) {
    if (fir_input > sec_input)
        temp_1 = fir_input;
    else
        temp_1 = sec_input;
    if (thi_input > fou_input)
        temp_2 = thi_input;
    else
        temp_2 = fou_input;
    if (temp_1 > temp_2)
        return temp_1;
    else
        return temp_2;
}

int main() {
    /*
    printf("�������ĸ����֣��Զ��Ÿ�����\n");
    printf("�������1�����֣�\n");
    scanf_s("%d", &fir);
    printf("�������2�����֣�\n");
    scanf_s("%d", &sec);
    printf("�������3�����֣�\n");
    scanf_s("%d", &thi);
    printf("�������4�����֣�\n");
    scanf_s("%d", &fou);
    */
    printf("�������ĸ����������Կո������");
    scanf("%d%d%d%d", &fir, &sec, &thi, &fou);
    printf("���ĸ������������ǣ�%d\n", biggest(fir, sec, thi, fou));
    system("pause");
    return 0;
}