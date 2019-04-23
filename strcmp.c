#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char a[100] = "zhangbing";
    char b[100] = "zhangbingzhagb";
    if(strncmp(a,b,3)==0)
    {
        printf("same\n");
    }
    else
    {
        printf("no\n");
    }
     return 0;
}
