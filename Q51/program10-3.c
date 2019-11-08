#include <stdio.h>
#include <stdlib.h>
//以下是第一次的欢迎界面*************
int order = 0;    //商品选项
int Qty = 0;      //商品数量
float price = 0;  //商品单价
float total = 0;  //商品总价，还未购买时总价为0
int choice = 0;   //主菜单选项，商品大类选项，是否继续购买

void welcome();
void welcome2();
void cardver();
void menu(int);
void meatBuy();
void vegBuy();

int main() {
    welcome();
    cardver();  //刷卡验证模块
    while (1) {
        welcome2();  //菜单主界面显示
        menu(choice);
        //***********以下是买菜的循环购买过程****
        if (choice == 1)  //选择购买有机菜类
        {
            vegBuy();
        }
        //*********************以下是买肉品过程**********************************************
        if (choice == 2)  //选择购买肉类
        {
            meatBuy();
        }
        if (choice == 0) {
            break;
        }
    }
    printf("\t您总共需要付款：%.2f\n", total);
    system("pause");
    return 0;
}

void welcome()  //欢迎界面
{
    printf("\t**************************\n");
    printf("\t欢迎使用全智慧售菜一体机\n");
    printf("\t**************************\n");
}
void cardver()  //刷卡验证模块
{
    int knum;  //存储用户卡号
    int num;   //存储文件中的卡号
    FILE *fp;
    int flag = 0;  //标记变量
    printf("\t请输入您的卡号：");
    scanf("%d", &knum);
    fp = fopen(
        "card.txt",
        "r");  //请编程实现从文件card.txt中读取卡号验证登陆，并提示刷卡成功或卡号不存在
    if (fp == NULL) {
        printf("\tcan't open file.\n");
        exit(0);
    }
    while (!feof(fp)) {
        fscanf(fp, "%d", &num);
        if (num == knum) {
            printf("\t刷卡成功，您可以继续购菜！");
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("\t卡号不存在，刷卡失败！");
        exit(0);
    }
}

void welcome2()  //主菜单
{
    printf("\n\t**************************\n\n");
    printf("\t欢迎使用全智慧售菜一体机   \n\n");
    printf("\t**************************\n");
    printf("\t1、有机菜\n");
    printf("\t2、肉  类\n");
    printf("\t0、退  出\n");
    scanf("%d", &choice);
    if (choice == 0) exit(0);
}
void menu(int n)  //菜品选择界面，n代表要购买的商品大类。
{
    switch (n) {
        case 1:
            printf("\t本机共提供如下5种有机青菜：\n");
            printf("\t1--菠  菜（3.0元）\n");
            printf("\t2--上海青（2.5元）\n");
            printf("\t3--大白菜（1.5元）\n");
            printf("\t4--鸡毛菜（3.5元）\n");
            printf("\t5--空心菜（2.0元）\n");
            printf("\t6--返回主界面 \n");
            break;
        case 2:
            printf("\t本机共提供如下3种肉类：\n");
            printf("\t1--猪肉（13.0元）\n");
            printf("\t2--牛肉（17.0元）\n");
            printf("\t3--羊肉（18.0元）\n");
            printf("\t6--返回主界面 \n");
            break;
    }
}

void vegBuy() {
    printf("\t请输入您选择的商品序号:\n");
    scanf("%d", &order);
    printf("\t请输入您购买该商品的数量 :\n");
    scanf("%d", &Qty);
    switch (order) {
        case 1:
            price = 3.0;
            break;
        case 2:
            price = 2.5;
            break;
        case 3:
            price = 1.5;
            break;
        case 4:
            price = 3.5;
            break;
        case 5:
            price = 2.0;
            break;
        default:
            printf("\t输入数字序号有误\n");
            price = 0;
    }
    total += (price * Qty);  //将每次购买的价格计入总价
    printf("\t按【0】结束购买，请输入6继续购买");
    scanf("%d", &choice);
}

void meatBuy() {
    printf("\t请输入您选择的商品序号:\n");
    scanf("%d", &order);
    printf("\t请输入您购买该商品的数量 :\n");
    scanf("%d", &Qty);
    switch (order) {
        case 1:
            price = 13.0;
            break;
        case 2:
            price = 17.0;
            break;
        case 3:
            price = 18.0;
            break;
        default:
            printf("\t输入数字序号有误\n");
            price = 0;
    }
    total += (price * Qty);  //将每次购买的价格计入总价
    printf("\t按【0】结束购买，请输入6继续购买");
    scanf("%d", &choice);
}