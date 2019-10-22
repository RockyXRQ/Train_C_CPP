#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, sum = 0;
    i = 1;
    while (i < 101) {
        sum = sum + i;
        i++;
    }
    printf("The sum from 1 to 100 is % d\n", sum);
    system("pause");
    return 0;
}
