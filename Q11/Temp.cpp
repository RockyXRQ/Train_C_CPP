#include "include_Path.h"
#include "Malloc_Test.h"

int main(){
printf("%s\n",Malloc_Block());
free(Malloc_Block());
system("pause");
return 0;
}
