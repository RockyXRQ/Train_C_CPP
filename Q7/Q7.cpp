//此文件为Q7.cpp

#include "Move.cpp"

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    char m[6][7] = {"######", 
                    "#O #  ", 
                    "# ## #",
                    "#  # #",
                    "##   #",
                    "######"};
    int i, x, y, p, q;
    char ch1;
    x = 1, y = 1, p = 1, q = 5;
    for (i = 0; i < 6; i++) puts(m[i]);

    while (x != p || y != q) {
        ch1 = getch();
        move(m, ch1, &x, &y);
        system("cls");
        for (i = 0; i < 6; i++) puts(m[i]);
    }
    printf("Congratulations  on  winning  the  maze  !");
    system("pause");
    return 0;
}
