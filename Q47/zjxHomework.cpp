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
    //�˵�ѡ��
    printf("\n\n");
    printf("\t\t\t**************************\n\n");
    printf("\t\t\t��ӭʹ�ý�����������������ϵͳ   \n\n");
    printf("\t\t\t 1.��ֵ��ѯ \n\n");
    printf("\t\t\t 2.ָ���ѯ\n\n");
    printf("\t\t\t 3.�ۺ����ָ����������ѯ \n\n");
    printf("\t\t\t 0.�˳� \n\n");
    printf("\t\t\t**************************\n");
    printf("\t\t\t����������ѡ�");
    scanf("%c", &choice);
    fflush(stdin);
    if (choice > '0' && choice < '4') {
        printf("\n\t\t\t��Ҫ��ѯʲô��?\n");
        domenu1(choice);
    } else if (choice == '0') {
        printf("\n\t\t\t��ӭ�´��ٴ�ʹ��!\n");
        exit(0);
    } else
        printf("\n\t\t\t���Ĳ˵�ѡ������������������룡\n");

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
                "\n\t\t\t��ֱ�������ߡ����ء�Ѫѹֵ��Ѫ��ֵ�����ݼ��Ϊ�ո�"
                "\n");
            break;
        case '0':
            exit(0);
    }
}

void display_menu2() {
    printf("\t\t\t   1--��֬\n");
    printf("\t\t\t   2--Ѫѹ\n");
    printf("\t\t\t   3--Ѫ��\n");
    printf("\t\t\t   4--����\n");
    printf("\t\t\t   0--��  �� \n");
    /****���֧�ṹʵ��ѡ��Ѫѹ��Ѫ�ǵȲ��ֲ�ѯ****/
    printf("\n\t\t\t����в˵�ѡ��");
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            
            char s;
            printf("\t\t\t������������ߣ�cm):");
            scanf("%f", &high);
            fflush(stdin);
            printf("\t\t\t�������������أ�kg)��");
            scanf("%f", &weight);
            fflush(stdin);
            printf("\t\t\t�����������Ա�");
            scanf("%c", &s);
            fflush(stdin);
            tizhi(high, weight, s);
            break;
        case 2:
            printf("\t\t\t����������Ѫѹֵ������ѹ����");
            scanf("%d", &shuzhang);
            ya = xueyanp(shuzhang);
            if (ya == 2)
                printf("\n\t\t\t��ע�⣡����Ѫѹƫ�ߣ�\n");
            else if (ya == -1)
                printf("\n\t\t\t��ע�⣡����Ѫѹƫ�ͣ�\n");
            else if (ya == 1)
                printf("\n\t\t\t��ϲ��������Ѫѹ����������������֣�\n");
            break;
        case 3:
            printf("\t\t\t���������Ŀո�Ѫ��ֵ��");
            scanf("%f", &xuetang);
            if (xuetang > 11)
                printf("\n\t\t\t��ע�⣡����Ѫѹ��ƫ�ߣ���ȷ��Ϊ����\n");
            else if (xuetang > 6.1)
                printf(
                    "\n\t\t\t��ע�⣡����Ѫ��ƫ�ߣ��������򲡣�������һ����飡"
                    "\n");
            else if (xuetang > 3.9)
                printf("\n\t\t\t��ϲ��������Ѫ������������������֣�\n");
            else
                printf("\n\t\t\t��ע�⣡����Ѫ��ƫ�ͣ�\n");
            break;
        case 4:
            int xlv = 0;
            printf("\n\t\t\t�����������������µ�����\n");
            xinlv(xlv);
    }
}

int xueyanp(int x)  //�β�x��ʾѪѹ������ѹ
{
    int z;  // ȡֵ��ͬ��ʶѪѹ״̬��ͬ
    if (x < 60)
        z = -1;  //Ѫѹ��
    else if (x < 80 && x > 59)
        z = 1;  //Ѫѹ����
    else if (x > 79)
        z = 2;  //Ѫѹ��
    return z;
}

void tizhi(float high, float weight,
           char s) {  //�β�high��weight�ֱ��ʾ��ߡ����ء��Ա�
    register float stdWeight = 0;
    if (s == 'F')
        stdWeight = (high - 100) * 0.9 - 2.5;
    else if (s == 'M')
        stdWeight = (high - 100) * 0.9;
    else {
        printf("�������");
        system("pause");
        exit(0);
    }
    printf("%f %f\n", weight, stdWeight);
    if (weight < 0.8 * stdWeight)
        printf("�����ڳ��أ�\n");
    else if (weight < 0.9 * stdWeight && weight > 0.8 * stdWeight)
        printf("������ƫ�ݣ�\n");
    else if (weight > 0.9 * stdWeight && weight < 1.1 * stdWeight)
        printf("�����ڱ�׼���أ�\n");
    else if (weight > 1.1 * stdWeight && weight < 1.2 * stdWeight)
        printf("�����ڳ��أ�\n");
    else if (weight > 1.2 * stdWeight && weight < 1.2 * stdWeight)
        printf("��������ȷ��֣�\n");
    else if (weight > 1.3 * stdWeight && weight < 1.5 * stdWeight)
        printf("�������жȷ��֣�\n");
    else if (weight > 1.5 * stdWeight)
        printf("�������ضȷ��֣�\n");
}

void xinlv(int xlv) {
    if (xlv > 100)
        printf("����������Ķ����٣�\n");
    else if (xlv < 60)
        printf("����������Ķ�������\n");
    else
        printf("��������������\n");
}

void display_zbmenu() {
    int choice2;
    int num = 0;
    printf(
        "\t\t\t*******��ӭʹ�ý������������������ϵͳ��ָ֢���ѯ*******\n");
    printf("\t\t\t 1--PT \n");
    printf("\t\t\t 2--PN\n");
    printf("\t\t\t 3--BI-RADS\n");
    printf("\t\t\t 0--�˳�\n");
    printf("������˵�ѡ������ָ��ֻ��ţ�");
    scanf("%d %d", &choice2, &num);
    zbsearch(choice2, num);
}

void zbsearch(int choice2, int num) {
    if (choice2 == 1) {
        if (num == 0)
            printf("��ϲ�������ܽ�����δ���ְ�֢��\n");
        else if (num == 1)
            printf("1��\n");
        else if (num == 2)
            printf("2��\n");
        else if (num == 3)
            printf("3��\n");
        else if (num == 4)
            printf("4��\n");
        else
            printf("�޷�ȷ��\n");
    } else if (choice2 == 2) {
        if (num == 0)
            printf("δ���ֲ��ܰͽ�ת��\n");
        else if (num == 1)
            printf("�ֲ��ܰͽ�ת��1��\n");
        else if (num == 2)
            printf("�ֲ��ܰͽ�ת��2��\n");
        else if (num == 3)
            printf("�ֲ��ܰͽ�ת��3��\n");
        else if (num == 4)
            printf("�ٽ��ֲ��ܰͽ�ת��\n");
        else
            printf("�޷��ж�");
    } else if (choice2 == 3) {
        if (num == 0) printf("��ȷ����Ҫ�ٴμ��\n");
        if (num == 1) printf("����\n");
        if (num == 2) printf("����\n");
        if (num == 3) printf("��������\n");
        if (num == 4) printf("���ƶ��ԣ���Ҫ��֯ѧ��ϣ�\n");
        if (num == 5) printf("�߶���ʾ����\n");
        if (num == 6) printf("�����֤ʵ����\n");
    } else if (choice2 == 0) {
        system("pause");
        exit(0);
    }
}