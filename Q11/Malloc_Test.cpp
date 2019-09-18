#include "Malloc_Test.h"
#include "include_Path.h"
#include <string.h>

#define HELLO "Hello malloc()!"

char * Malloc_Block(){
static char * name;    
char (*ptd)[20] = (char(*)[20])malloc(3*20*sizeof(char));
strcpy(ptd[1],HELLO);
return *(ptd+1);
}