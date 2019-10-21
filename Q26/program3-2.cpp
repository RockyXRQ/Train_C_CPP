#include <stdio.h>
#include <stdlib.h>

void decode(char*);
char pin[100];

int main() {
    scanf("%s", pin);
    decode(pin);
    printf("%s\n", pin);
    system("pause");
    return 0;
}

void decode(char* temp) {
    for (int i = 0; i <= 99; i++) {
        if (temp[i] <= 'W' && temp[i] >= 'A')
            temp[i] += 3;
        else if (temp[i] <= 'Z' && temp[i] >= 'X')
            temp[i] -= 23;
    }
}
