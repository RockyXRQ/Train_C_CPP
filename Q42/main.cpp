#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRand();

int main() {
    srand((unsigned int) time(NULL));
    int count = 0;
    int even = 0;
    printf("��������Ҫ���ɼ������֣�");
    scanf("%d", &count);
    while(count){
        register int temp = getRand();
        if(temp%2==0){
            ++even;
        }
        printf(" %d", temp);
        --count;
    }
    printf("��%d��ż��", even);
    system("pause");
    return 0;
}

int getRand() {
    return (int) rand()%1000;
}
