#include <stdio.h>
#include <stdlib.h>

struct numNode {
    int num = 0;
    int again = 0;
};

int main() {
    int numListB[100] = {0};
    register int count = 0;
    register int i = 0;
    struct numNode numList[100];

    while (count < 10 && scanf("%d", &numList[count].num)) {
        for (int target = 0; target < count; ++target) {
            if (numList[count].num == numList[target].num) {
                numList[count].again = 1;
                numList[target].again = 1;
            }
        }
        ++count;
    }

    register int tempTarget = 0;
    register int tempMin = __INT_MAX__;
    for (int targetA = 0; targetA < count; ++targetA) {
        for (int targetB = 0; targetB < count; ++targetB) {
            if (numList[targetB].again == 0 && numList[targetB].num < tempMin) {
                tempMin = numList[targetB].num;
                tempTarget = targetB;
            }
        }
        numList[tempTarget].again = 1;
        numListB[i++] = numList[tempTarget].num;
        tempMin = __INT_MAX__;
    }

    for (int targetA = 0;
         targetA < count && numListB[targetA] != numListB[targetA - 1];
         ++targetA)
        printf("%d ", numListB[targetA]);

    system("pause");
    return 0;
}