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
    printf("����ɼ�:");
    k = 0;
    scanf("%d", &x);
    while (k < MAXNUM && x >= 0 && x <= 100) {
        mark[k] = x;
        k = k + 1;
        scanf("%d", &x);
    }
    if (k > 0)
        printf("Max = %d\n", getmax(mark, k)); /* �����߷� */
    else
        printf("No marks!\n");
    system("pause"); /*������ͣ������������� */
    return 0;
}
