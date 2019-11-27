#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRand();

int main() {
    srand((unsigned int) time(NULL));
    register int tempMax = 0;
    FILE* fp = fopen("data-2.txt", "a");
    for (int count = 0; count < 20; count++) {
        register int tempValue = GetRand();
        printf("%5d ", tempValue);
        fprintf(fp, "%d\n", tempValue);
        if (count && (count + 1) % 5 == 0) printf("\n");
        if (count % 2 == 0 && tempValue > tempMax) tempMax = tempValue;
    }
    printf("%d", tempMax);
    fprintf(fp, "%d\n", tempMax);
    system("pause");
    return 0;
}

int GetRand() {
    return rand() % 500 + 1;
}