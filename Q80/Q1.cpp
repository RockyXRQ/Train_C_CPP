#include <stdio.h>
#include <stdlib.h>

int Money[100] = {0};

int main() {
    for (register int qty1 = 0; qty1 <= 30; ++qty1)
        for (register int qty2 = 0; qty2 <= 10; ++qty2) {
            register int tempValue = 5 * qty1 + 2 * qty2;
            if (tempValue<100 & tempValue> 1) Money[tempValue] = 1;
        }
    for (register int target = 1; target < 100; ++target)
        if (!Money[target]) printf("%.2fԪ\n", (float) target * 0.01);
    system("pause");
    return 0;
}
