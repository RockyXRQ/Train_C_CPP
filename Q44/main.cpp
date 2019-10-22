#include <stdio.h>
#include <stdlib.h>
//定义标准、儿童、老人的平日、高峰日及2日票价
#define PRICE_STD1 370
#define PRICE_STD2 499
#define PRICE_DCT1 280
#define PRICE_DCT2 375
#define PRICE_STD_2_1 670
#define PRICE_STD_2_2 785
#define PRICE_STD_2_3 900
#define PRICE_DCT_2_1 510
#define PRICE_DCT_2_2 595
#define PRICE_DCT_2_3 680
int main() {
    //声明判断工作日和周末的函数
    int weekday(int y, int m, int d);
    //存放标准、儿童、老人票的数量
    int num_std = 0, num_kid = 0, num_old = 0;
    //存放到访日期年、月、日
    int year = 0, month = 0, day = 0;
    //定义一个数组，存放每个月份的天数
    int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //存放日期合法标志
    int date_no = 1;
    //存放第一天平日或高峰日标志 ：平日为0，周末为1
    int flag1 = 0;
    //存放第二天平日或高峰日标志 ：平日为0，周末为1
    int flag2 = 0;
    //存放门票类型：1日票为'1'，2日票为'2'
    char type = '\0';
    //存放标准、儿童、老人票的各自总计价格
    double price_std = 0, price_kid = 0, price_old = 0;
    //存放总计票价
    double price = 0;
    //输入门票数量
    printf("欢迎游览迪士尼乐园！\n");
    printf("\n请输入门票数量\n");
    printf("标准票（张）：");
    scanf("%d", &num_std);
    printf("儿童票（张）：");
    scanf("%d", &num_kid);
    printf("老人票（张）：");
    scanf("%d", &num_old);
    //######################################################################################################
    //输入到访日期，判断输入日期合法性
    while (date_no) {
        printf(
            "\n请输入到访日期\n\37\37\37 格式为年 月 日：2000 1 1 \37\37\37\n");
        printf("请输入：");
        scanf("%d %d %d", &year, &month, &day);
        //******************************************************************************************************
        //闰年判断，如果是闰年二月份天数加1
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            Month[2]++;
        }
        //******************************************************************************************************

        //******************************************************************************************************
        //输入的日期合法性判断
        if (day <= Month[month] && day > 0 && month < 13 && month > 0 &&
            year > 2016 && year < 3000) {
            date_no = 0;
        } else {
            printf("输入日期不合法，请重新输入！");
        }
        //******************************************************************************************************
    }
    //######################################################################################################
    //获取第一天平日或高峰日标志
    flag1 = weekday(year, month, day);
    //
    //选择购票类型
    printf("\n请选择购票类型\n");
    printf("\t1 ---- 1日票 \t\n");
    printf("\t2 ---- 2日票 \t\n");
    printf("\t0 ---- 退出 \t\n");
    printf("\t请选择：");
    getchar();
    scanf("%c", &type);
    printf("\n");

    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //根据购票类型计算相应门票价格
    switch (type) {
        case '0':
            return 0;
        //计算1日票的门票价格
        case '1':
            //******************************************************************************************************
            if (flag1 == 0) {
                //平日票1日票合计
                price_std = PRICE_STD1 * num_std;
                price_kid = PRICE_DCT1 * num_kid;
                price_old = PRICE_DCT1 * num_old;
                if (month == 6 & day == 1) {
                    price_std *= 0.8;
                }
                price = price_std + price_kid + price_old;
            } else {
                //高峰日票1日票合计
                price_std = PRICE_STD2 * num_std;
                price_kid = PRICE_DCT2 * num_kid;
                price_old = PRICE_DCT2 * num_old;
                if (month == 6 & day == 1) {
                    price_std *= 0.8;
                }
                price = price_std + price_kid + price_old;
            }
            
            break;
            //******************************************************************************************************
            
        //计算2日票的门票价格
        case '2':
            //获取第二天平日或高峰日标志
            flag2 = weekday(year, month, day + 1);
            //******************************************************************************************************
            if (flag1 + flag2 == 0) {
                //二日票合计：平日+平日
                price_std = PRICE_STD_2_1 * num_std;
                price_kid = PRICE_DCT_2_1 * num_kid;
                price_old = PRICE_DCT_2_1 * num_old;
            } else if (flag1 + flag2 == 1) {
                //二日票合计：平日+高峰日
                price_std = PRICE_STD_2_2 * num_std;
                price_kid = PRICE_DCT_2_2 * num_kid;
                price_old = PRICE_DCT_2_2 * num_old;
            } else {
                //二日票合计：高峰日+高峰日
                price_std = PRICE_STD_2_3 * num_std;
                price_kid = PRICE_DCT_2_3 * num_kid;
                price_old = PRICE_DCT_2_3 * num_old;
            }
                //******************************************************************************************************
                price = price_std + price_kid + price_old;
            break;
        default:
            printf("选择错误！退出！\n");
            return 0;
    }
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //输出门票价格汇总情况
    printf("\n您购买的门票价格情况如下：\n");
    printf("\n===================================\n");
    //******************************************************************************************************
    if (type == '1')
        printf("到访日期：%d年%d月%d日\n", year, month, day);
    else
        printf("到访日期：%d年%d月%d日起两日内\n", year, month, day);
    //******************************************************************************************************
    printf("%d X 标准票（1.4M以上）（%.2lf元）\n", num_std, price_std);
    printf("%d X 儿童票（1.0-1.4M）（%.2lf元）\n", num_kid, price_kid);
    printf("%d X 老人票（65岁以上）（%.2lf元）\n", num_old, price_old);
    printf("===================================\n");
    printf("总计\t%.2lf 元\n\n", price);
    printf(
        "不同年的相同日期可能是周末，也可能是平日，导致计算价格的公式发生区别"
        "\n");
    system("pause");
    return 0;
}

int weekday(int y, int m, int d) {
    //基姆拉尔森计算公式根据日期判断星期几
    //根据工作日或周末返回平日或高峰日标志flag
    //
    //存放平日或高峰日标志
    int flag = 0;
    int iweek = 0;
    if (m == 1 || m == 2) m += 12, y--;
    iweek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    switch (iweek) {
        case 0:
            flag = 0;
            break;
        case 1:
            flag = 0;
            break;
        case 2:
            flag = 0;
            break;
        case 3:
            flag = 0;
            break;
        case 4:
            flag = 0;
            break;  //平日（工作日）为0
        case 5:
            flag = 1;
            break;
        case 6:
            flag = 1;
            break;  //高峰日（周末）为1
    }
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    return flag;
}
