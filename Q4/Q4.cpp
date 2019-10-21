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
    printf("请输入四个数字，以逗号隔开：\n");
    printf("请输入第1个数字：\n");
    scanf_s("%d", &fir);
    printf("请输入第2个数字：\n");
    scanf_s("%d", &sec);
    printf("请输入第3个数字：\n");
    scanf_s("%d", &thi);
    printf("请输入第4个数字：\n");
    scanf_s("%d", &fou);
    */
    printf("请输入四个整数，并以空格隔开：");
    scanf("%d%d%d%d", &fir, &sec, &thi, &fou);
    printf("这四个数字中最大的是：%d\n", biggest(fir, sec, thi, fou));
    system("pause");
    return 0;
}