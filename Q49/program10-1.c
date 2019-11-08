#include <stdio.h>
#include <stdlib.h>
int main() {
    int knum;  //存储用户卡号
    int num;   //存储文件中的卡号
    FILE *fp;
    int flag = 0;  //标记变量
    printf("\n\n");
    printf("\t\t\t**************************\n\n");
    printf("\t\t\t欢迎使用全智慧自动售卖机\n\n");
    printf("\t\t\t**************************\n");
    printf("\t\t\t请输入您的卡号：");
    scanf("%d", &knum);
    fp = fopen("card.txt", "r");
    if (fp == NULL) {
        printf("can't open file.\n");
        exit(0);
    }
    while (!feof(fp)) {
        fscanf(fp, "%d", &num);
        if (num == knum) {
            printf("刷卡成功，您可以继续购菜！");
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("卡号不存在，刷卡失败！");
    }
    system("pause");
    return 0;
}
