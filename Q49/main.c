#include <stdio.h>
#include <stdlib.h>
int main() {
    int knum;  //�洢�û�����
    int num;   //�洢�ļ��еĿ���
    FILE *fp;
    int flag = 0;  //��Ǳ���
    printf("\n\n");
    printf("\t\t\t**************************\n\n");
    printf("\t\t\t��ӭʹ��ȫ�ǻ��Զ�������\n\n");
    printf("\t\t\t**************************\n");
    printf("\t\t\t���������Ŀ��ţ�");
    scanf("%d", &knum);
    fp = fopen("card.txt", "r");
    if (fp == NULL) {
        printf("can't open file.\n");
        exit(0);
    }
    while (!feof(fp)) {
        fscanf(fp, "%d", &num);
        if (num == knum) {
            printf("ˢ���ɹ��������Լ������ˣ�");
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("���Ų����ڣ�ˢ��ʧ�ܣ�");
    }
    system("pause");
    return 0;
}
