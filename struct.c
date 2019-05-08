#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct A
{
	char a[10];
	int n;
};

int main()
{
	struct A sa = {0};
	printf("%lu\n",sizeof(sa));
	char *p = (char *)&sa;
	printf("%p\n",p);
return 0;
}
