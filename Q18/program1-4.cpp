#include<stdio.h>
#include<stdlib.h>

#define PWD 25

int main(){
int ages;
printf("\t�ϰ�ʱ�䵽�ˣ���ȥ����С�ǰɣ�\n");
printf("\t����������.\n�����ˣ�\n");
scanf("%2d",&ages);  //���뺯����������������ֵ
if(ages==PWD)
    printf("\t��ӭʹ��С�ǣ��µ�һ�������ˣ�\n");
else
    printf("\t�Բ���������С�ǵ����ˣ�\n");
system("pause");
return 0;
}

