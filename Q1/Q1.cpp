#include<stdio.h>

int main(){
for(int fir=1;fir<=4;fir++){
    for(int sec=1;sec<=4;sec++){
      for(int thi=1;thi<=4;thi++){
      if(fir!=sec&&fir!=thi&&sec!=thi){
      printf("%d\n",fir*100+sec*10+thi*1);
         }
      }
   }
}
getchar();
return 0 ;

}