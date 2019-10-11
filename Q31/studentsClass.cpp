#include "includeList.h"
#include "studentsClass.h"

void Students::init(){
    int bool1=false,bool2=false;
    
    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("请输入您的身份证号码：");
    scanf("%s",profileNum);
    printf("请输入您的学号：");
    scanf("%s",studentNum);
    printf("请输入您的所在学院：");
    scanf("%s",academy);
    printf("请输入您的专业信息：");
    scanf("%s",major);
    printf("您是否已经选课（1/0）");
    
    scanf("%d",&bool1);
    if(bool1==1)
        isSubChoose=true;
    printf("您本学期是否结束（1/0）");
    
    scanf("%d",&bool2);
    if(bool2==1)
        isTermFin=true;
}

bool Students::isAllFin(){
    return strlen(name) && strlen(profileNum) &&strlen(studentNum) \
           && strlen(academy) && strlen(major) && isTermFin && isSubChoose;
