/* Main.cpp */

#include "GetName.h"
#include "Include_List.h"

int main() {
    struct Words_Malloc* Test1 =
        (struct Words_Malloc*)malloc(2 * sizeof(char*));

    getName(Test1);
    getName_Free(Test1);

    system("pause");

    return 0;
}