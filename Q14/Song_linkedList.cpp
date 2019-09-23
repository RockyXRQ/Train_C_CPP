/* Song_linkedList.cpp */

#include "Song_linkedList.h"
#include "D:\Univeristy\Code\C_CPP\Rocky_Lib\Rocky_Lib.h"

struct song * head = NULL;
struct song * prev,* current;
char input[30];

void song_info_collection(){
   printf("������Ҫ��¼�ĸ��������֣�");
   while(s_gets(input,30)&&input[0]!='\0'){//����Ϊ��ֵ���Ǵ�ѭ����������ȡ��Ϣ
       current = (struct song*)malloc(sizeof(struct song));//ѭ����ÿһ�ο�ʼ��current����ָ����λ�õ��ڴ�
       current->name = (char*)malloc(sizeof(input));
       
       if(head==NULL)//������Ϣ�Ļ�ȡ�ӵ�һ����ȡ
       head = current;//headָ����ǵ�һ��prev�ṹ��
       else
       prev->next = current;//��һ��head����֮��ÿһ���ṹ���ڵ�nextָ����һ���ṹ��

       current->next = NULL;
       strcpy(current->name,input);
       printf("���������Ա����������ۣ�");
       scanf("%d",&current->rating);
       
       while(getchar()!='\n')
       continue;

       printf("��������һ������������(���������밴�س�����)");
       prev = current;
   }
}

void song_list_print(){
    if(head==NULL)
    printf("û�д洢�κθ�����ϢŶ~\n");
    else
    printf("����Ϊ������Ϣ��\n");

    current = head;//ʹcurrentָ���һ���ṹ���λ��
    while(current!=NULL){
        printf("��������%s,���ۣ�%d\n",current->name,current->rating);       
        current = current->next;//ֱ��ʹcurrent�ݽ�����һ���ṹ���λ��
    }
}

void song_list_free(){
    current = head;
    while(current!=NULL){
        current = head;
        head = current->next;
        free(current->next);
        free(current);
    }
    printf("����������");
}

