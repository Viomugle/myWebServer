#include "tools.h"
void tools::assert(bool cond,const char* mess)
{
    if(cond)
    {
        printf("%s\n",mess);
        exit(-1);
    }
}