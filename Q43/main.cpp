#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int order = 0;
} Dish;
Dish a, b, c, d;
Dish BestSell();

int main() {
    char choice;

    strcpy(a.name, "����ţ���ײ�");
    strcpy(b.name, "���������ײ�");
    strcpy(c.name, "���������ײ�");
    strcpy(d.name, "���������ײ�");
    printf(
        "�뿪ʼ���Ĳ�����\na. ��һ��%s\nb. ��һ��%s\nc. "
        "��һ��%s\nd. ��һ��%s\ne. ��ʾ��ǰ�������ײ�\n",
        a.name, b.name, c.name, d.name);
    while (1) {
        Dish temp = BestSell();
        printf("��ѡ��");
        scanf("%c", &choice);
        getchar();
        if (choice == 'a') {
            ++a.order;
        } else if (choice == 'b') {
            ++b.order;
        } else if (choice == 'c') {
            ++c.order;
        } else if (choice == 'd') {
            ++d.order;
        } else if (choice == 'e') {
            printf("���������ײ���%s,������Ϊ��%d\n", temp.name, temp.order);
        }
    }
    system("pause");
    return 0;
}

Dish BestSell() {
    Dish temp;
    Dish dishList[4] = {a, b, c, d};
    for (int count = 0; count < 4; count++) {
        if (dishList[count].order > temp.order) {
            temp = dishList[count];
        }
    }
    return temp;
}
