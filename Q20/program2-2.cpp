#include <stdio.h>
#include <stdlib.h>
int main()
{    
int use;
    FILE *fp;
    int hour,min;
    fp=fopen("1.txt","r");
    fscanf(fp,"%d%d",&hour,&min);                
    printf("\n\t\t现在时间是：%02d:%02d\n",hour,min);
    printf("\t输入预计使用的时间(分钟): ");
    scanf("%d",&use);                      
    min=min+use;
    if(min>=60)
       {hour=hour+1;
         min=min-60;
       }
    printf("预计到达公司的时间为:%02d:%02d",hour,min);     
    system("pause");                  
    fclose(fp);
    return 0;
}
