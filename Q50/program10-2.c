#include <stdio.h>
#include<stdlib.h>
int main() {
    int order;  //��Ʒѡ��
    int Qty;    //��Ʒ����
    float price;
    float total = 0;  //��Ʒ�ܼۣ���δ����ʱ�ܼ�Ϊ0
    int choice = 1;   //�Ƿ�������򣬳�ʼʱĬ�ϼ�������
    printf("\t\t\tģ������ȫ�ǻ��۲�һ���\n");
    printf("�������ṩ����5���л���ˣ�\n");
    printf("1--��  �ˣ�3.0Ԫ��\n");
    printf("2--�Ϻ��ࣨ2.5Ԫ��\n");
    printf("3--��ײˣ�1.5Ԫ��\n");
    printf("4--��ë�ˣ�3.5Ԫ��\n");
    printf("5--���Ĳˣ�2.0Ԫ��\n");
    printf("0--��  �� \n");
    /*����ѭ���ṹʵ�ֶ�ι��򲢼���*/
    while (choice!=0)  // choice������0ʱ��Ϊ��ѡ���������
    {
        printf("��������ѡ�����Ʒ���:\n");
        scanf("%d", &order);
        printf("���������������Ʒ������ :\n");
        scanf("%d", &Qty);
        /*���֧�ṹȷ����˵ĵ���*/
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
                printf("���������������\n");
                price = 0;
        }
        total = Qty * price;  //��ÿ�ι���ļ۸�����ܼ�
        printf("����0����������������6��������");
        scanf("%d", &choice);
    }
    printf("����Ҫ���%.2f\n", total);
    system("pause");
    return 0;
}
