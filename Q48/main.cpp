#include <stdio.h>
#include <stdlib.h>

int main() {
    int temp = 0;
    register int total = 0;
    register int count = 0;

    FILE* fp = fopen("numbers.txt", "r");
    while (fscanf(fp, "%d", &temp)) {
        total += temp;
        ++count;
    }

    printf("%d", total / count);

    system("pause");
    return 0;
}
