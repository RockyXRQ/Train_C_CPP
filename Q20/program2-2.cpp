#include <stdio.h>
#include <stdlib.h>
int main()
{    
int use;
    FILE *fp;
    int hour,min;
    fp=fopen("1.txt","r");
    fscanf(fp,"%d%d",&hour,&min);                
    printf("\n\t\t����ʱ���ǣ�%02d:%02d\n",hour,min);
    printf("\t����Ԥ��ʹ�õ�ʱ��(����): ");
    scanf("%d",&use);                      
    min=min+use;
    if(min>=60)
       {hour=hour+1;
         min=min-60;
       }
    printf("Ԥ�Ƶ��﹫˾��ʱ��Ϊ:%02d:%02d",hour,min);     
    system("pause");                  
    fclose(fp);
    return 0;
}
