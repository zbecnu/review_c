#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100] = "hello,9999999999999999";
	a[3] = 0;
	printf("len(a) is %d\n",strlen(a));
    char b[100] = "zhangbing";
    strcat(a,b);
    printf("%s\n",a);
    return 0;
}
