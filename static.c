#include <stdio.h>

int *get()
{
	static int a  = 100;
	return &a; 

}

int main()
{
	int *p = get();
	printf("%d\n",*p);
	(*p)++;
	printf("%d\n",*p);
	return 0;
}
