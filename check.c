#include <stdio.h>

int main()
{
	char *a[]= {"sdasad","dsads","sdasdad"};
	printf("%lu\n",sizeof(a));
	printf("%lu\n",sizeof(*a));
	printf("%lu\n",sizeof(a[0]));
#if 0
	printf("zhangbing");
#endif
	return 0;
}
