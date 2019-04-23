#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100] = "zhangbing";
    char *s;
    s = strchr(name,'a');
    if(s != NULL )
    printf("%s\n",s);
    return 0;
}
