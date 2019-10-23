#include <stdio.h>
#include <stdlib.h>
//�����׼����ͯ�����˵�ƽ�ա��߷��ռ�2��Ʊ��
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
    //�����жϹ����պ���ĩ�ĺ���
    int weekday(int y, int m, int d);
    //��ű�׼����ͯ������Ʊ������
    int num_std = 0, num_kid = 0, num_old = 0;
    //��ŵ��������ꡢ�¡���
    int year = 0, month = 0, day = 0;
    //����һ�����飬���ÿ���·ݵ�����
    int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //������ںϷ���־
    int date_no = 1;
    //��ŵ�һ��ƽ�ջ�߷��ձ�־ ��ƽ��Ϊ0����ĩΪ1
    int flag1 = 0;
    //��ŵڶ���ƽ�ջ�߷��ձ�־ ��ƽ��Ϊ0����ĩΪ1
    int flag2 = 0;
    //�����Ʊ���ͣ�1��ƱΪ'1'��2��ƱΪ'2'
    char type = '\0';
    //��ű�׼����ͯ������Ʊ�ĸ����ܼƼ۸�
    double price_std = 0, price_kid = 0, price_old = 0;
    //����ܼ�Ʊ��
    double price = 0;
    //������Ʊ����
    printf("��ӭ������ʿ����԰��\n");
    printf("\n��������Ʊ����\n");
    printf("��׼Ʊ���ţ���");
    scanf("%d", &num_std);
    printf("��ͯƱ���ţ���");
    scanf("%d", &num_kid);
    printf("����Ʊ���ţ���");
    scanf("%d", &num_old);
    //######################################################################################################
    //���뵽�����ڣ��ж��������ںϷ���
    while (date_no) {
        printf(
            "\n�����뵽������\n\37\37\37 ��ʽΪ�� �� �գ�2000 1 1 \37\37\37\n");
        printf("�����룺");
        scanf("%d %d %d", &year, &month, &day);
        //******************************************************************************************************
        //�����жϣ������������·�������1
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            Month[2]++;
        }
        //******************************************************************************************************

        //******************************************************************************************************
        //��������ںϷ����ж�
        if (day <= Month[month] && day > 0 && month < 13 && month > 0 &&
            year > 2016 && year < 3000) {
            date_no = 0;
        } else {
            printf("�������ڲ��Ϸ������������룡");
        }
        //******************************************************************************************************
    }
    //######################################################################################################
    //��ȡ��һ��ƽ�ջ�߷��ձ�־
    flag1 = weekday(year, month, day);
    //
    //ѡ��Ʊ����
    printf("\n��ѡ��Ʊ����\n");
    printf("\t1 ---- 1��Ʊ \t\n");
    printf("\t2 ---- 2��Ʊ \t\n");
    printf("\t0 ---- �˳� \t\n");
    printf("\t��ѡ��");
    getchar();
    scanf("%c", &type);
    printf("\n");

    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //���ݹ�Ʊ���ͼ�����Ӧ��Ʊ�۸�
    switch (type) {
        case '0':
            return 0;
        //����1��Ʊ����Ʊ�۸�
        case '1':
            //******************************************************************************************************
            if (flag1 == 0) {
                //ƽ��Ʊ1��Ʊ�ϼ�
                price_std = PRICE_STD1 * num_std;
                price_kid = PRICE_DCT1 * num_kid;
                price_old = PRICE_DCT1 * num_old;
                if (month == 6 & day == 1) {
                    price_std *= 0.8;
                }
                price = price_std + price_kid + price_old;
            } else {
                //�߷���Ʊ1��Ʊ�ϼ�
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
            
        //����2��Ʊ����Ʊ�۸�
        case '2':
            //��ȡ�ڶ���ƽ�ջ�߷��ձ�־
            flag2 = weekday(year, month, day + 1);
            //******************************************************************************************************
            if (flag1 + flag2 == 0) {
                //����Ʊ�ϼƣ�ƽ��+ƽ��
                price_std = PRICE_STD_2_1 * num_std;
                price_kid = PRICE_DCT_2_1 * num_kid;
                price_old = PRICE_DCT_2_1 * num_old;
            } else if (flag1 + flag2 == 1) {
                //����Ʊ�ϼƣ�ƽ��+�߷���
                price_std = PRICE_STD_2_2 * num_std;
                price_kid = PRICE_DCT_2_2 * num_kid;
                price_old = PRICE_DCT_2_2 * num_old;
            } else {
                //����Ʊ�ϼƣ��߷���+�߷���
                price_std = PRICE_STD_2_3 * num_std;
                price_kid = PRICE_DCT_2_3 * num_kid;
                price_old = PRICE_DCT_2_3 * num_old;
            }
                //******************************************************************************************************
                price = price_std + price_kid + price_old;
            break;
        default:
            printf("ѡ������˳���\n");
            return 0;
    }
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    //�����Ʊ�۸�������
    printf("\n���������Ʊ�۸�������£�\n");
    printf("\n===================================\n");
    //******************************************************************************************************
    if (type == '1')
        printf("�������ڣ�%d��%d��%d��\n", year, month, day);
    else
        printf("�������ڣ�%d��%d��%d����������\n", year, month, day);
    //******************************************************************************************************
    printf("%d X ��׼Ʊ��1.4M���ϣ���%.2lfԪ��\n", num_std, price_std);
    printf("%d X ��ͯƱ��1.0-1.4M����%.2lfԪ��\n", num_kid, price_kid);
    printf("%d X ����Ʊ��65�����ϣ���%.2lfԪ��\n", num_old, price_old);
    printf("===================================\n");
    printf("�ܼ�\t%.2lf Ԫ\n\n", price);
    printf(
        "��ͬ�����ͬ���ڿ�������ĩ��Ҳ������ƽ�գ����¼���۸�Ĺ�ʽ��������"
        "\n");
    system("pause");
    return 0;
}

int weekday(int y, int m, int d) {
    //��ķ����ɭ���㹫ʽ���������ж����ڼ�
    //���ݹ����ջ���ĩ����ƽ�ջ�߷��ձ�־flag
    //
    //���ƽ�ջ�߷��ձ�־
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
            break;  //ƽ�գ������գ�Ϊ0
        case 5:
            flag = 1;
            break;
        case 6:
            flag = 1;
            break;  //�߷��գ���ĩ��Ϊ1
    }
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    return flag;
}