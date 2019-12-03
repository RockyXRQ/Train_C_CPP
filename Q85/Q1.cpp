#include <stdio.h>
#include <stdlib.h>
void reverse(char s[]) {
    int i, length;
    char t;
    for (length = 0; s[length]!='\0'; length++)
        ;
    for (i = 0; i < length / 2; i++) {
        t = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = t;
    }
}
int main() {
    char str[80];
    scanf("%s",str);
    reverse(str);
    printf("%s\n", str);
    system("pause");
    return 0;
}
