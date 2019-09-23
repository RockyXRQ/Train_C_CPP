/* Song_linkedList.cpp */

#include "Song_linkedList.h"
#include "D:\Univeristy\Code\C_CPP\Rocky_Lib\Rocky_Lib.h"

struct song * head = NULL;
struct song * prev,* current;
char input[30];

void song_info_collection(){
   printf("请输入要记录的歌曲的名字：");
   while(s_gets(input,30)&&input[0]!='\0'){//输入为空值的那次循环将结束获取信息
       current = (struct song*)malloc(sizeof(struct song));//循环的每一次开始，current都会指向新位置的内存
       current->name = (char*)malloc(sizeof(input));
       
       if(head==NULL)//链表信息的获取从第一个获取
       head = current;//head指向的是第一个prev结构体
       else
       prev->next = current;//从一个head存在之后，每一个结构体内的next指向下一个结构体

       current->next = NULL;
       strcpy(current->name,input);
       printf("请输入您对本歌曲的评价：");
       scanf("%d",&current->rating);
       
       while(getchar()!='\n')
       continue;

       printf("请输入下一个歌曲的名字(若不输入请按回车结束)");
       prev = current;
   }
}

void song_list_print(){
    if(head==NULL)
    printf("没有存储任何歌曲信息哦~\n");
    else
    printf("以下为歌曲信息：\n");

    current = head;//使current指向第一个结构体的位置
    while(current!=NULL){
        printf("歌曲名：%s,评价：%d\n",current->name,current->rating);       
        current = current->next;//直接使current递进到下一个结构体的位置
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
    printf("结束···");
}

