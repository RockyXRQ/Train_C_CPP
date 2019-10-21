#include "Ball.h"

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define FINAL_X 5
#define FINAL_Y 9

int main() {
    Ball Ball_Puzzel;

    char m[6][12] = {"###########", 
                     "#O #      #", 
                     "# ## #### #",
                     "#  # #### #", 
                     "##   #### #", 
                     "######### #"};
    int i, x, y, p, q;
    char ch1;
    x = 1, y = 1;
    for (i = 0; i < 6; i++) puts(m[i]);

    while (x != FINAL_X || y != FINAL_Y) {
        ch1 = _getch();
        Ball_Puzzel.move(m, ch1, &x, &y);
        system("cls");
        for (i = 0; i < 6; i++) puts(m[i]);
    }
    printf("Congratulations  on  winning  the  maze  !");
    system("pause");
    return 0;
}
