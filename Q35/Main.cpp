#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define PRICE 0.6 //�궨����ڿ�ͷ���ϴ���淶

int main(void){    //������������
  int x, y;
  scanf("%d",&x);
  if (x<=3000)
    y = x*PRICE+1;
  else if (x<=5000)
    y = 3000*PRICE+(x-3000)*(PRICE+0.1)+1;
  else
    y = 3000*PRICE+(5000-3000)*(PRICE+0.1)+(x-5000)*(PRICE+0.3)+1; //�޸����ձ���Ϊ0.3
  printf("%d\n",y);
  
  system("pause");   //��ֹ�������������
  return 0;
}
