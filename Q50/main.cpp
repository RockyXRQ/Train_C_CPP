#include <stdio.h>
#include<stdlib.h>
int main() {
    int order;  //商品选项
    int Qty;    //商品数量
    float price;
    float total = 0;  //商品总价，还未购买时总价为0
    int choice = 1;   //是否继续购买，初始时默认继续购买
    printf("\t\t\t模拟社区全智慧售菜一体机\n");
    printf("本机共提供如下5种有机青菜：\n");
    printf("1--菠  菜（3.0元）\n");
    printf("2--上海青（2.5元）\n");
    printf("3--大白菜（1.5元）\n");
    printf("4--鸡毛菜（3.5元）\n");
    printf("5--空心菜（2.0元）\n");
    printf("0--退  出 \n");
    /*利用循环结构实现多次购买并计算*/
    while (choice!=0)  // choice不等于0时认为是选择继续购买
    {
        printf("请输入您选择的商品序号:\n");
        scanf("%d", &order);
        printf("请输入您购买该商品的数量 :\n");
        scanf("%d", &Qty);
        /*多分支结构确定青菜的单价*/
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
                printf("输入数字序号有误\n");
                price = 0;
        }
        total = Qty * price;  //将每次购买的价格计入总价
        printf("按【0】结束购买，请输入6继续购买");
        scanf("%d", &choice);
    }
    printf("您需要付款：%.2f\n", total);
    system("pause");
    return 0;
}
