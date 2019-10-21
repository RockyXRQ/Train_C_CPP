#include <stdlib.h>
#include "stdio.h"
int main() {
    for (register float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (register float x = -1.5f; x < 1.5f; x += 0.05f) {
            register float a = x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
        }
        putchar('\n');
    }
    system("pause");
}
