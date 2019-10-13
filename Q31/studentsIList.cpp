#include "includeList.h"
#include "studentsClass.h"
#include "studentsList.h"

StudentsList::StudentsList(){
    head = (Students*)malloc(sizeof(Students));
    head ->next = NULL;
    listLen = 0;
}

void StudentsList::clearList(){
   Students *current = head->next;
   while (current != NULL){
       Students *temp =current->next;
       free(current);
       current = temp;
   }
}
void StudentsList::listPrintByName(char *name){
   char nameToSearch[20];
   printf("请输入您要进行搜索并打印的名字:");
   scanf("%s",nameToSearch);
   Students *current = head;
   while(current->next!=NULL){
       if(strcmp(current->name,nameToSearch)==0){
            printf("----------------------------------------\n");
            printf("姓名:%s\n",current->name);
            printf("身份证号:%s\n",current->profileNum);
            printf("学号:%s\n",current->studentNum);
            printf("所在学院:%s\n",current->academy);
            printf("所在专业:%s\n",current->major);
            printf("本学期是否结束:%d\n",current->isTermFin);
            printf("选课是否完成:%s\n",current->name);
            break;
       }
    current=current->next;
   }
}

void StudentsList::listTraverse(){
   Students *current = head->next;
   while(current!=NULL){
       printf("----------------------------------------\n");
       printf("姓名:%s\n",current->name);
       printf("身份证号:%s\n",current->profileNum);
       printf("学号:%s\n",current->studentNum);
       printf("所在学院:%s\n",current->academy);
       printf("所在专业:%s\n",current->major);
       printf("本学期是否结束:%d\n",current->isTermFin);
       printf("选课是否完成:%s\n",current->name);

   if(current->isSubChoose!=true)
       printf("选课仍完成，立即选课");
   if(current->isTermFin!=true)
       printf("本学期有挂科，请关注您的补考时间");

       current = current->next;
   }
}
        
bool StudentsList::isListEmpty(){
    if(listLen==0)
        return true;
    else
        return false;
}

bool StudentsList::listInsertTail(){
    Students *current =head;
    while(current->next != NULL)
        current=current->next;
    Students *newStudents =(Students*)malloc(sizeof(Students));
    newStudents->init();
    newStudents->next = NULL;
    current->next =newStudents;
    listLen+=1;
    return true;
}

bool StudentsList::listSearchByName(){
   char nameToSearch[20];
   printf("请输入您要进行搜索的名字:");
   scanf("%s",nameToSearch);
   Students *current =head;
   while(current->next != NULL){
       if(strcmp(current->name,nameToSearch)==0){
           printf("查有此人");
           return true;
       }
   }
   printf("查无此人");
   return false;
}