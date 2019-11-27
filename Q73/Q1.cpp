#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[100], b[50];
    gets(a);
    gets(b);
    fputs(a,stdout);
    fputs(" ", stdout);
    fputs(b,stdout);
    system("pause");
    return 0;
}
