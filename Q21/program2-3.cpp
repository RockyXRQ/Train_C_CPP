#include "stdio.h"
#include <stdlib.h>
int main(){   
int age;
float high;
char bir;
    printf("\n\n\t������������Ϣ\n\n");
    printf("\n\t��������:");
    scanf("%d",&age);
    printf("\n\t�������:");
    scanf("%f",&high);
    getchar();
    printf("\n\t���Ƿ�������գ�y/n����:");
    scanf("%c",&bir);
    if (age>80)
        printf("\n\t�����������ⵥ��\n");
    else if(high<1.2)
        printf("\n\t�����������ⵥ��\n");
    else if(bir='y')
       printf("\n\t�����������ⵥ��\n");
    else
           printf("\n\t��Ǹ���������������ⵥ��\n");
    system("pause");
    return 0;  
}
