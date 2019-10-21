#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef void (*pocketFunc)();

struct User {
    float changeBlc;
    float bankBlc;
} user{0, 0};

void NormalPocket();
void LuckyPocket();
void WordPocket();
void MainUI();
void UserInit();

double GetRandNum(int, int, int, int);

pocketFunc PocketSwitch();

int main() {
    MainUI();

    system("pause");
    return 0;
}

void MainUI() {
    int objSwitch = 0;
    UserInit();
    printf("������Ҫ��˭������أ����ٺ��� �ں���Ⱥ��");
    scanf("%d", &objSwitch);
    if (objSwitch == 1)
        NormalPocket();
    else if (objSwitch == 2) {
        PocketSwitch()();
    } else {
        printf("ѡ�����");
        system("pause");
        exit(0);
    }
}

void UserInit() {
    printf("������������Ǯ��");
    scanf("%f", &user.changeBlc);
    printf("�������������п���");
    scanf("%f", &user.bankBlc);
}

pocketFunc PocketSwitch() {
    register int choice = 0;
    printf(
        "\n�� һ����\n�� ƴ�������\n�� ������\n��ѡ����Ҫ���͵ĺ�����ͣ�");
    scanf("%d", &choice);
    if (choice == 1)
        return NormalPocket;
    else if (choice == 2)
        return LuckyPocket;
    else if (choice == 3)
        return WordPocket;
    else {
        printf("�������");
        system("pause");
        exit(0);
    }
}

void NormalPocket() {
    float money = 0;
    int count = 0;
    char sntnce[20];
    printf("��������Ҫ���͵Ľ�");
    scanf("%f", &money);
    if (money > user.bankBlc && money > user.changeBlc) {
        printf("����,�޷����ͺ����");
        system("pause");
        exit(0);
    }
    printf("��������Ҫ���͵ĺ��������");
    scanf("%d", &count);
    const int orgCount = count;
    const int orgMoney = money;
    printf("������һ��ף���");
    scanf("%s", sntnce);
    if (fabs(money - 6.66) < 0.00001) strcpy(sntnce, "������˳");
    printf("\nף���%s\n", sntnce);

    printf("����Ľ��ֱ�Ϊ��");
    while (count > 1) {
        printf(" %.2f", (float) orgMoney / (float) orgCount);
        money -= orgMoney / orgCount;
        count -= 1;
    }
    printf(" %.2f", money);
}

void LuckyPocket() {
    float money = 0;
    int count = 0;
    char sntnce[20];

    printf("��������Ҫ���͵Ľ�");
    scanf("%f", &money);
    if (money > user.bankBlc && money > user.changeBlc) {
        printf("����,�޷����ͺ����");
        system("pause");
        exit(0);
    }

    printf("��������Ҫ���͵ĺ��������");
    scanf("%d", &count);
    printf("������һ��ף���");
    scanf("%s", sntnce);
    if (fabs(money - 6.66) < 0.00001) strcpy(sntnce, "������˳");

    printf("\nף���%s\n", sntnce);

    printf("����Ľ��ֱ�Ϊ��");
    while (count > 1) {
        register double temp = GetRandNum(0, money, count, 2);
        printf(" %.2f", temp);
        money -= temp;
        count -= 1;
    }
    printf(" %.2f", money);
}

void WordPocket() {
    float money = 0;
    int count = 0;
    char sntnce[20];
    char* word = (char*) malloc(21);
    char* wordCmp = (char*) malloc(21);
    printf("��������Ҫ���͵Ľ�");
    scanf("%f", &money);
    if (money > user.bankBlc && money > user.changeBlc) {
        printf("����,�޷����ͺ����");
        system("pause");
        exit(0);
    }
    printf("��������Ҫ���͵ĺ��������");
    scanf("%d", &count);
    printf("��������Ҫ���õĿ��(���ɶ���20���ַ���");
    scanf("%s", word);

    printf("������һ��ף���");
    scanf("%s", sntnce);
    if (fabs(money - 6.66) < 0.00001) strcpy(sntnce, "������˳");
    printf("\nף���%s\n", sntnce);

    while (count > 1) {
        printf("�������������ȡ���:");
        scanf("%s", wordCmp);
        if (strcmp(word, wordCmp) == 0) {
            register double temp = GetRandNum(0, money, count, 2);
            printf(" %.2f", temp);
            money -= temp;
            count -= 1;
        } else
            printf("������󣡲�����ȡ�����");
    }
    printf(" %.2f", money);
}

double GetRandNum(int rangeLow, int rangeHigh, int times, int pit) {
    srand((unsigned) time(NULL));
    register double temp = (rand() % (rangeHigh * (int) pow(10, pit) -
                                      rangeLow * (int) pow(10, pit)) +
                            rangeLow * (int) pow(10, pit)) /
                           pow(10, pit);
    return temp - times * (1 / pow(10, 2));
}