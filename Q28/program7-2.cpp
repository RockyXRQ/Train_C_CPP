#include "stdio.h"
#include <stdlib.h>
int main()
{
    char gender, ms;
    int age;
     /*����˾������ϸ��Ϣ*/
    printf("\n\n\t˾������ϸ��Ϣ\n\n");
    printf("\n\t˾���Ļ���״��(y/n):");
    scanf("%c",&ms);fflush(stdin);
    printf("\n\t˾�����Ա�(M/F):");
    scanf("%c",&gender);fflush(stdin);
    printf("\n\t˾��������:");
    scanf("%d",&age);
    /* ���� if �ṹ */
    if (ms=='y') /*���˾���Ļ���״��*/
        printf("\n\t��˾������Ͷ��\n");
    else if(age>30&&gender=='M')
        /*���δ�飬����Ƿ���30�����ϵ����� */
        printf("\n\t��˾������Ͷ��\n");
    else if(age>25&&gender=='F')
        /* ����Ƿ���25�����ϵ�Ů��*/
        printf("\n\t��˾������Ͷ��\n");
    else
        printf("\n\t��˾������Ͷ��\n");
    system("pause");
    return 0;  
}
