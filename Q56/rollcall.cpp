#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct studentinfo {
    bool iscalled = false;
    char sxueNo[14];
    char sname[20];
} st[200];

int main() {               
    int i = 0, j = 0, flag = 0, RN, *a;
    FILE *fp;
    char ch, filename[20] = {0}, line[100] = {0};

    fp = fopen("name.txt", "r");
    while (fgets(line, sizeof(line) - 1, fp)) {
        if (line[0] != '\n' && line[0] != ' ') {
            sscanf(line, "%s %s\n", st[i].sxueNo, st[i].sname);
            ++i;
        }
    }

    srand((unsigned)time(NULL));
    while ((ch = getch()) != 'q') {
        if (flag == i) {
            printf("%s\n", "点名结束\n");
            break;
        }
        bool finished = false;
        while (finished == false) {
            RN = rand() % i;
            if (st[RN].iscalled == false) {
                printf("被叫到的是：%s %s\n", st[RN].sxueNo, st[RN].sname);
                st[RN].iscalled = true;
                ++flag;
                break;
            }
        }
    }
    system("pause");
    return 0;
}