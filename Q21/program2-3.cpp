#include "stdio.h"
#include <stdlib.h>
int main(){   
int age;
float high;
char bir;
    printf("\n\n\t请输入您的信息\n\n");
    printf("\n\t您的年龄:");
    scanf("%d",&age);
    printf("\n\t您的身高:");
    scanf("%f",&high);
    getchar();
    printf("\n\t您是否今天生日（y/n）？:");
    scanf("%c",&bir);
    if (age>80)
        printf("\n\t您可以享受免单！\n");
    else if(high<1.2)
        printf("\n\t您可以享受免单！\n");
    else if(bir='y')
       printf("\n\t您可以享受免单！\n");
    else
           printf("\n\t抱歉！您不可以享受免单！\n");
    system("pause");
    return 0;  
}
