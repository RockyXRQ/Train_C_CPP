#include <stdio.h>
#include <stdlib.h>

int* num_input() {
    static int num[10];
    int times = 0;
    do {
        printf("�������%d�����֣�", times + 1);
        scanf("%d", &num[times]);
        times += 1;
    } while (times < 10);
    return num;
}

void num_count(int counter[]) {
    int positive = 0, zero = 0, negative = 0;
    for (int times = 0; times <= 9; times++) {
        if (counter[times] > 0)
            positive += 1;
        else if (counter[times] == 0)
            zero += 1;
        else if (counter[times] < 0)
            negative += 1;
    }
    printf("������%d��\n0��%d��\n������%d��\n", positive, zero, negative);
}

int main() {
    num_count(num_input());
    system("pause");
    return 0;
}
