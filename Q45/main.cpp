#include <stdio.h>
#include <stdlib.h>

void domenu1(char choice1);

void display_menu2();

int main() {
    char choice;  //菜单选项
    printf("\n\n");
    printf("\t\t\t**************************\n\n");
    printf("\t\t\t欢迎使用健康体检诊断自助服务系统   \n\n");
    printf("\t\t\t 1.数值查询 \n\n");
    printf("\t\t\t 2.指标查询\n\n");
    printf("\t\t\t 3.综合体检指标分析结果查询 \n\n");
    printf("\t\t\t 0.退出 \n\n");
    printf("\t\t\t**************************\n");
    printf("\t\t\t请输入您的选项：");
    scanf("%c", &choice);
    fflush(stdin);
    if (choice > '0' && choice < '4') {
        printf("\n\t\t\t您要查询什么呢?\n");
        domenu1(choice);
    } else if (choice == '0') {
        printf("\n\t\t\t欢迎下次再次使用!\n");
        exit(0);
    } else
        printf("\n\t\t\t您的菜单选项输入错误，请重新输入！\n");

    system("pause");
    return 0;
}
void domenu1(char choice1) {
    switch (choice1) {
        case '1':
            display_menu2();
            break;
        case '2':
            display_menu2();
            break;
        case '3':
            printf(
                "\n\t\t\t请分别输入身高、体重、血压值、血糖值（数据间隔为空格）"
                "\n");
            break;
        case '0':
            exit(0);
    }
}
void display_menu2() {
    printf("\t\t\t   1--体脂\n");
    printf("\t\t\t   2--血压\n");
    printf("\t\t\t   3--血糖\n");
    printf("\t\t\t   4--心率\n");
    printf("\t\t\t   0--退  出 \n");
}
