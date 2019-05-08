#include <stdio.h>
char *getmychar(void)
{
	char *name = "zhangbing";
	printf("%s\n",name);
	printf("%p\n",name);
	return name;
}

int main()
{
	char *name = getmychar();
	printf("%s\n",name);
	printf("%p\n",name);
	return 0;
}
