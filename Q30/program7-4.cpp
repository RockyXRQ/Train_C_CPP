#include <stdio.h>
#include <stdlib.h>
int main() {
    register float dailyMark = 0, finalMark = 0;

    FILE* score;

    score = fopen("score.txt", "r");
    fscanf(score, "%f%f", &dailyMark, &finalMark);
    printf("ƽʱ�ɼ�=%.2f ��ĩ���Գɼ�=%.2f�������ɼ�=%.2f", dailyMark,
           finalMark, 0.4 * dailyMark + 0.6 * finalMark);
    fclose(score);

    system("pause");
    return 0;
}
