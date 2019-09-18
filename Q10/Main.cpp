#include "Include_List.h"
#include "RT_Triangle.h"

int main(){
  RT_Triangle RT_Triangle_1;
  
  printf("则此三角形的斜边长为：%.2f\n",RT_Triangle_1.Getc());
  printf("则此三角形的面积为：%.2f\n",RT_Triangle_1.GetArea());

  system("pause");

  return 0;
}