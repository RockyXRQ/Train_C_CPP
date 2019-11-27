#include <stdio.h>
#include <stdlib.h>

int IsRight(int, int);
float invaildValue = 0;

int main() {
        for (register int qty1 = 0; qty1 <= 30; ++qty1)
        for (register int qty2 = 0; qty2 <= 10; ++qty2)
            if (IsRight(qty1, qty2)) printf("±ÒÖµÎª£º%.2f\n", invaildValue);
    system("pause");
    return 0;
}

int IsRight(int qty1, int qty2) {
    invaildValue = (float)qty1 * 0.02 + (float)qty2 * 0.05;
    if (invaildValue > 1.00 || invaildValue < 0.01) {
        return 1;
    }
    return 0;
}