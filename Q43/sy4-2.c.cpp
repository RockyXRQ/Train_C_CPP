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

    strcpy(a.name, "红烧牛肉套餐");
    strcpy(b.name, "红烧猪肉套餐");
    strcpy(c.name, "红烧羊肉套餐");
    strcpy(d.name, "红烧人肉套餐");
    printf(
        "请开始您的操作：\na. 点一份%s\nb. 点一份%s\nc. "
        "点一份%s\nd. 点一份%s\ne. 显示当前最热卖套餐\n",
        a.name, b.name, c.name, d.name);
    while (1) {
        Dish temp = BestSell();
        printf("请选择：");
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
            printf("最热卖的套餐是%s,销售量为：%d\n", temp.name, temp.order);
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
