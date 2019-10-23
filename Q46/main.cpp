#include <stdio.h>
#include <stdlib.h>

int xueyanp(int);

int main() {
    int choice1;
    int shuzhang, ya;
    float xuetang;
    printf("\n\n\t\t\t*******欢迎继续使用健康体检诊断自助服务系统****** \n");
    printf("\n\t\t\t   1--体脂\n");
    printf("\t\t\t   2--血压\n");
    printf("\t\t\t   3--血糖\n");
    printf("\t\t\t   4--心率\n");
    printf("\t\t\t   0--退  出 \n");
    /****多分支结构实现选择血压、血糖等部分查询****/
    printf("\n\t\t\t请进行菜单选择：");
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            printf("\t\t\t抱歉！功能待扩充\n");
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
            printf("\n\t\t\t抱歉!功能待扩充\n");
    }
    system("pause");
    return 0;
}
/******判断血压情况******/
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

