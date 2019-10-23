#include <stdio.h>
#include <stdlib.h>

void domenu1(char choice1);

void display_menu2();
void tizhi(float, float, char);
void xinlv(int);
void display_zbmenu();
void zbsearch(int, int);
int xueyanp(int);

int choice1;
int shuzhang, ya;
float xuetang;
char choice;
float high = 0;
float weight = 0;

int main() {
    //菜单选项
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
            display_zbmenu();
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
    /****多分支结构实现选择血压、血糖等部分查询****/
    printf("\n\t\t\t请进行菜单选择：");
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            
            char s;
            printf("\t\t\t请输入您的身高（cm):");
            scanf("%f", &high);
            fflush(stdin);
            printf("\t\t\t请输入您的体重（kg)：");
            scanf("%f", &weight);
            fflush(stdin);
            printf("\t\t\t请输入您的性别：");
            scanf("%c", &s);
            fflush(stdin);
            tizhi(high, weight, s);
            break;
        case 2:
            printf("\t\t\t请输入您的血压值（舒张压）：");
            scanf("%d", &shuzhang);
            ya = xueyanp(shuzhang);
            if (ya == 2)
                printf("\n\t\t\t请注意！您的血压偏高！\n");
            else if (ya == -1)
                printf("\n\t\t\t请注意！您的血压偏低！\n");
            else if (ya == 1)
                printf("\n\t\t\t恭喜您！您的血压正常！，请继续保持！\n");
            break;
        case 3:
            printf("\t\t\t请输入您的空腹血糖值：");
            scanf("%f", &xuetang);
            if (xuetang > 11)
                printf("\n\t\t\t请注意！您的血压糖偏高！可确诊为糖尿病\n");
            else if (xuetang > 6.1)
                printf(
                    "\n\t\t\t请注意！您的血糖偏高！疑似糖尿病，请做进一步检查！"
                    "\n");
            else if (xuetang > 3.9)
                printf("\n\t\t\t恭喜您！您的血糖正常！，请继续保持！\n");
            else
                printf("\n\t\t\t请注意！您的血糖偏低！\n");
            break;
        case 4:
            int xlv = 0;
            printf("\n\t\t\t请输入您安静条件下的心率\n");
            xinlv(xlv);
    }
}

int xueyanp(int x)  //形参x表示血压的舒张压
{
    int z;  // 取值不同标识血压状态不同
    if (x < 60)
        z = -1;  //血压低
    else if (x < 80 && x > 59)
        z = 1;  //血压正常
    else if (x > 79)
        z = 2;  //血压高
    return z;
}

void tizhi(float high, float weight,
           char s) {  //形参high、weight分别表示身高、体重、性别
    register float stdWeight = 0;
    if (s == 'F')
        stdWeight = (high - 100) * 0.9 - 2.5;
    else if (s == 'M')
        stdWeight = (high - 100) * 0.9;
    else {
        printf("输入错误！");
        system("pause");
        exit(0);
    }
    printf("%f %f\n", weight, stdWeight);
    if (weight < 0.8 * stdWeight)
        printf("您属于超重！\n");
    else if (weight < 0.9 * stdWeight && weight > 0.8 * stdWeight)
        printf("您属于偏瘦！\n");
    else if (weight > 0.9 * stdWeight && weight < 1.1 * stdWeight)
        printf("您属于标准体重！\n");
    else if (weight > 1.1 * stdWeight && weight < 1.2 * stdWeight)
        printf("您属于超重！\n");
    else if (weight > 1.2 * stdWeight && weight < 1.2 * stdWeight)
        printf("您属于轻度肥胖！\n");
    else if (weight > 1.3 * stdWeight && weight < 1.5 * stdWeight)
        printf("您属于中度肥胖！\n");
    else if (weight > 1.5 * stdWeight)
        printf("您属于重度肥胖！\n");
}

void xinlv(int xlv) {
    if (xlv > 100)
        printf("您属于窦性心动过速！\n");
    else if (xlv < 60)
        printf("您属于窦性心动过缓！\n");
    else
        printf("您的心率正常！\n");
}

void display_zbmenu() {
    int choice2;
    int num = 0;
    printf(
        "\t\t\t*******欢迎使用健康体诊诊断自助服务系统癌症指标查询*******\n");
    printf("\t\t\t 1--PT \n");
    printf("\t\t\t 2--PN\n");
    printf("\t\t\t 3--BI-RADS\n");
    printf("\t\t\t 0--退出\n");
    printf("请输入菜单选择并输入指标分机号：");
    scanf("%d %d", &choice2, &num);
    zbsearch(choice2, num);
}

void zbsearch(int choice2, int num) {
    if (choice2 == 1) {
        if (num == 0)
            printf("恭喜您！您很健康！未发现癌症！\n");
        else if (num == 1)
            printf("1级\n");
        else if (num == 2)
            printf("2级\n");
        else if (num == 3)
            printf("3级\n");
        else if (num == 4)
            printf("4级\n");
        else
            printf("无法确认\n");
    } else if (choice2 == 2) {
        if (num == 0)
            printf("未见局部淋巴结转移\n");
        else if (num == 1)
            printf("局部淋巴结转移1级\n");
        else if (num == 2)
            printf("局部淋巴结转移2级\n");
        else if (num == 3)
            printf("局部淋巴结转移3级\n");
        else if (num == 4)
            printf("临近局部淋巴结转移\n");
        else
            printf("无法判定");
    } else if (choice2 == 3) {
        if (num == 0) printf("不确定，要再次检查\n");
        if (num == 1) printf("阴性\n");
        if (num == 2) printf("良性\n");
        if (num == 3) printf("可能良性\n");
        if (num == 4) printf("拟似恶性（需要组织学诊断）\n");
        if (num == 5) printf("高度提示恶性\n");
        if (num == 6) printf("活检已证实恶性\n");
    } else if (choice2 == 0) {
        system("pause");
        exit(0);
    }
}