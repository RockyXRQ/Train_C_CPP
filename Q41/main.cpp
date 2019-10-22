#include <stdio.h>
#include <stdlib.h>

int main() {
    float worktime = 0;
    int grade = 0;
    float basic = 0;
    float all = 0;
    float tax = 0;
    float netwage = 0;

grade:
    printf(
        "**********************************\n\
          Enter the number corresponding to\n\
          the desired pay rate or action:\n\n\
         (1)$8.75/h  (2)$9.33/h\n\
         (3)$10.00/h (4)$11.20/h\n\
        **********************************\n");
    printf("Please select:\n");
    scanf("%d", &grade);

    printf("Worktimes of this week?\n");
    scanf("%f", &worktime);
    switch (grade) {
        case 1:
            basic = 8.75;
            break;
        case 2:
            basic = 9.33;
            break;
        case 3:
            basic = 10.00;
            break;
        case 4:
            basic = 11.20;
            break;
        default:
            printf("Select Error!\n");
            goto grade;
    }
    if (worktime<40) {
        all = worktime * basic;
    } else {
        all = (worktime - 40) * 1.5 * basic + 40 * basic;
    }
    /*
    tax = (all > 300) ? 300 * 0.15 + (((all - 300) > 150) ?\
    150 * 0.2 + (all - 300 - 150) * 0.25 : (all - 300) * 0.2)\
    : all * 0.15;*/
    if (all > 300) {
        if (all>450) {
            tax = 300 * 0.15 + 150 * 0.2 + (all - 450) * 0.25;
        } else {
            tax = 300 * 0.15 + (all - 300) * 0.2;
        }
    } else {
        tax = all * 0.15;
    }
    netwage = all - tax;
    printf("Detail:\n");
    printf("all = %.2f\ntax = %.2f\nnetwage = %.2f\n", all, tax, netwage);
    system("pause");
    return 0;
}
