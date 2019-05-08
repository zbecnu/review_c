#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = malloc(100);
	char *p = realloc(s1,20000);
	printf("%p\n",s1);
	printf("%p\n",p);
//	free(s1);
	free(p);
}
