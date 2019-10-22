#include <stdio.h>
#include <stdlib.h>
int main() {
    char x;
    x = 'z';
    while (x != 'a') {
        printf("%c ", x);
        x--;
    }
    system("pause");
    return 0;
}
