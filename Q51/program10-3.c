#include <stdio.h>
#include <stdlib.h>
//�����ǵ�һ�εĻ�ӭ����*************
int order = 0;    //��Ʒѡ��
int Qty = 0;      //��Ʒ����
float price = 0;  //��Ʒ����
float total = 0;  //��Ʒ�ܼۣ���δ����ʱ�ܼ�Ϊ0
int choice = 0;   //���˵�ѡ���Ʒ����ѡ��Ƿ��������

void welcome();
void welcome2();
void cardver();
void menu(int);
void meatBuy();
void vegBuy();

int main() {
    welcome();
    cardver();  //ˢ����֤ģ��
    while (1) {
        welcome2();  //�˵���������ʾ
        menu(choice);
        //***********��������˵�ѭ���������****
        if (choice == 1)  //ѡ�����л�����
        {
            vegBuy();
        }
        //*********************����������Ʒ����**********************************************
        if (choice == 2)  //ѡ��������
        {
            meatBuy();
        }
        if (choice == 0) {
            break;
        }
    }
    printf("\t���ܹ���Ҫ���%.2f\n", total);
    system("pause");
    return 0;
}

void welcome()  //��ӭ����
{
    printf("\t**************************\n");
    printf("\t��ӭʹ��ȫ�ǻ��۲�һ���\n");
    printf("\t**************************\n");
}
void cardver()  //ˢ����֤ģ��
{
    int knum;  //�洢�û�����
    int num;   //�洢�ļ��еĿ���
    FILE *fp;
    int flag = 0;  //��Ǳ���
    printf("\t���������Ŀ��ţ�");
    scanf("%d", &knum);
    fp = fopen(
        "card.txt",
        "r");  //����ʵ�ִ��ļ�card.txt�ж�ȡ������֤��½������ʾˢ���ɹ��򿨺Ų�����
    if (fp == NULL) {
        printf("\tcan't open file.\n");
        exit(0);
    }
    while (!feof(fp)) {
        fscanf(fp, "%d", &num);
        if (num == knum) {
            printf("\tˢ���ɹ��������Լ������ˣ�");
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("\t���Ų����ڣ�ˢ��ʧ�ܣ�");
        exit(0);
    }
}

void welcome2()  //���˵�
{
    printf("\n\t**************************\n\n");
    printf("\t��ӭʹ��ȫ�ǻ��۲�һ���   \n\n");
    printf("\t**************************\n");
    printf("\t1���л���\n");
    printf("\t2����  ��\n");
    printf("\t0����  ��\n");
    scanf("%d", &choice);
    if (choice == 0) exit(0);
}
void menu(int n)  //��Ʒѡ����棬n����Ҫ�������Ʒ���ࡣ
{
    switch (n) {
        case 1:
            printf("\t�������ṩ����5���л���ˣ�\n");
            printf("\t1--��  �ˣ�3.0Ԫ��\n");
            printf("\t2--�Ϻ��ࣨ2.5Ԫ��\n");
            printf("\t3--��ײˣ�1.5Ԫ��\n");
            printf("\t4--��ë�ˣ�3.5Ԫ��\n");
            printf("\t5--���Ĳˣ�2.0Ԫ��\n");
            printf("\t6--���������� \n");
            break;
        case 2:
            printf("\t�������ṩ����3�����ࣺ\n");
            printf("\t1--���⣨13.0Ԫ��\n");
            printf("\t2--ţ�⣨17.0Ԫ��\n");
            printf("\t3--���⣨18.0Ԫ��\n");
            printf("\t6--���������� \n");
            break;
    }
}

void vegBuy() {
    printf("\t��������ѡ�����Ʒ���:\n");
    scanf("%d", &order);
    printf("\t���������������Ʒ������ :\n");
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
            printf("\t���������������\n");
            price = 0;
    }
    total += (price * Qty);  //��ÿ�ι���ļ۸�����ܼ�
    printf("\t����0����������������6��������");
    scanf("%d", &choice);
}

void meatBuy() {
    printf("\t��������ѡ�����Ʒ���:\n");
    scanf("%d", &order);
    printf("\t���������������Ʒ������ :\n");
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
            printf("\t���������������\n");
            price = 0;
    }
    total += (price * Qty);  //��ÿ�ι���ļ۸�����ܼ�
    printf("\t����0����������������6��������");
    scanf("%d", &choice);
}