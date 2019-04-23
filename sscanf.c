#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100]="100+200";
    int i;
    int j;
    sscanf(a,"%d+%d",&i,&j);
    printf("%d+%d=%d\n",i,j,i+j);
    return 0;
}
