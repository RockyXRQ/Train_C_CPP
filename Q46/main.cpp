#include <stdio.h>
#include <stdlib.h>

int xueyanp(int);

int main() {
    int choice1;
    int shuzhang, ya;
    float xuetang;
    printf("\n\n\t\t\t*******��ӭ����ʹ�ý�����������������ϵͳ****** \n");
    printf("\n\t\t\t   1--��֬\n");
    printf("\t\t\t   2--Ѫѹ\n");
    printf("\t\t\t   3--Ѫ��\n");
    printf("\t\t\t   4--����\n");
    printf("\t\t\t   0--��  �� \n");
    /****���֧�ṹʵ��ѡ��Ѫѹ��Ѫ�ǵȲ��ֲ�ѯ****/
    printf("\n\t\t\t����в˵�ѡ��");
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            printf("\t\t\t��Ǹ�����ܴ�����\n");
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
            printf("\n\t\t\t��Ǹ!���ܴ�����\n");
    }
    system("pause");
    return 0;
}
/******�ж�Ѫѹ���******/
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

