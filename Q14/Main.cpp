/* Main.cpp */

#include "Include_list.h"
#include "Song_linkedList.h"

int main(){
   printf("下面开始歌曲输入···\n");
   
   song_info_collection();
   song_list_print();
   song_list_free();
   
   system("pause");
   
   return 0;
}