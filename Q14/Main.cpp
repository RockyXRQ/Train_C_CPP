/* Main.cpp */

#include "Include_list.h"
#include "Song_linkedList.h"

int main(){
   printf("���濪ʼ�������롤����\n");
   
   song_info_collection();
   song_list_print();
   song_list_free();
   
   system("pause");
   
   return 0;
}