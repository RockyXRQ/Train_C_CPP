#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[3][4] = {1, 2, 3, 4, 0, -1, -2, -5, 5, 6, -8, 0};
    int p=0, m=0, z=0, i, j;
    //赋初值
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            if (a[i][j] > 0)
                p++;  //元素为正
            else if (a[i][j] == 0)
                z++;
            else
                m++;
    printf("p=%d   m=%d   z=%d\n", p, m, z);

    system("pause");
    return 0;
}
