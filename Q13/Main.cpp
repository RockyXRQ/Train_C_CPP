/* Main.cpp */

#include "Include_List.h"
#include "GetName.h"

int main(){
    struct Words_Malloc * Test1 = (struct Words_Malloc*)malloc(40);
    
    getName(Test1);
    getName_Free(Test1);

    system("pause");
    
    return 0;
}