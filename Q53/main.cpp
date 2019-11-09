#include <stdio.h>
#include <stdlib.h>

int FbncPrint(int);

int main() {
    for (int i = 1; i < 11; i++) printf("%d ", FbncPrint(i));
    system("pause");
    return 0;
}

int FbncPrint(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return FbncPrint(n - 1) + FbncPrint(n - 2);
    }
}