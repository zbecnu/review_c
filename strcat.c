#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100] = "hello,";
    char b[100] = "zhangbing";
    strcat(a,b);
    printf("%s\n",a);
    return 0;
}
