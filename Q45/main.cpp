#include <stdio.h>
#include <stdlib.h>

void domenu1(char choice1);

void display_menu2();

int main() {
    char choice;  //�˵�ѡ��
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
            display_menu2();
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
}
