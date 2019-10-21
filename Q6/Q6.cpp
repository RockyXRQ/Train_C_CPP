#include <stdio.h>
#include <stdlib.h>

int* num_input() {
    static int num[10];
    int times = 0;
    do {
        printf("请输入第%d个数字：", times + 1);
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
    printf("正数有%d个\n0有%d个\n负数有%d个\n", positive, zero, negative);
}

int main() {
    num_count(num_input());
    system("pause");
    return 0;
}
