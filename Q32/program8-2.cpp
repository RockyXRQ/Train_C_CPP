#include <stdio.h>
#include <stdlib.h>

int main() {
    int score, temp;
    char grade;
    printf("enter score:");
    scanf("%d", &score);
    if ((score > 100) || (score < 0))  //�ɲ��Ҹĳɻ���
    {
        printf("\n error,try again!\n");
        exit(0);
    }
    if (score == 100)
        temp = 9;  //�޸�Ϊ==
    else
        temp = (score - score % 10) / 10;
    switch (temp) {
        case 0:
            grade = 'E';
            break;  //����
        case 1:
            grade = 'E';
            break;  //����break
        case 2:
            grade = 'E';
            break;
        case 3:
            grade = 'E';
            break;
        case 4:
            grade = 'E';
            break;
        case 5:
            grade = 'E';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
            grade = 'A';
            break;
    }
    printf("score=%d,grade=%c\n", score, grade);
    system("pause");  //��ֹ��������
    return 0;
}
