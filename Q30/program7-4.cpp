#include <stdio.h>
#include <stdlib.h>
int main() {
    register float dailyMark = 0, finalMark = 0;

    FILE* score;

    score = fopen("score.txt", "r");
    fscanf(score, "%f%f", &dailyMark, &finalMark);
    printf("平时成绩=%.2f 期末考试成绩=%.2f，总评成绩=%.2f", dailyMark,
           finalMark, 0.4 * dailyMark + 0.6 * finalMark);
    fclose(score);

    system("pause");
    return 0;
}
