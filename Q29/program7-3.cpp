#include <stdio.h>
#include <stdlib.h>

float waterYield,getTax(register float yield);

float *rangeList=(float[2]){220,80};
float *rateList=(float[3]){3.45,4.83,5.83};

int main(){
printf("�����뱾�����õ�ˮ����");
scanf("%f",&waterYield);

printf("��Ҫ���ɵ�˰��Ϊ��%.2f",getTax(waterYield));

system("pause");
return 0;
}

float getTax(register float yield){
 register int count=0;
 register float fund=0;
 while(1){
     if(yield-rangeList[count]>0&&count<=1){
        fund+=rangeList[count]*rateList[count];
        yield-=rangeList[count];
        count++;
      }
     else{
        fund+=yield*rateList[count];
        break;
      }
   }
 return fund;
 }

