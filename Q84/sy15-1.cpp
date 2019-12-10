#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 50
int getmax(int array[], int n) {
    int k, max;
    max = array[0];
    for (k = 1; k < n; k++)
        if (max < array[k]) max = array[k];
    return max;
}
int main() {
    int k, x;
    int mark[MAXNUM];
    printf("输入成绩:");
    k = 0;
    scanf("%d", &x);
    while (k < MAXNUM && x >= 0 && x <= 100) {
        mark[k] = x;
        k = k + 1;
        scanf("%d", &x);
    }
    if (k > 0)
        printf("Max = %d\n", getmax(mark, k)); /* 输出最高分 */
    else
        printf("No marks!\n");
    system("pause"); /*程序暂停，按任意键继续 */
    return 0;
}
