#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define PRICE 0.6 //宏定义放在开头符合代码规范

int main(void){    //主函数名错误
  int x, y;
  scanf("%d",&x);
  if (x<=3000)
    y = x*PRICE+1;
  else if (x<=5000)
    y = 3000*PRICE+(x-3000)*(PRICE+0.1)+1;
  else
    y = 3000*PRICE+(5000-3000)*(PRICE+0.1)+(x-5000)*(PRICE+0.3)+1; //修改最终倍率为0.3
  printf("%d\n",y);
  
  system("pause");   //防止程序结束后闪退
  return 0;
}
