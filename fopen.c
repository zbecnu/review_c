#include <stdio.h>

int main()
{
	FILE *f = fopen("./zhangbing.txt","r");
	if(f)
	{
		printf("success");
		fclose(f);
	}
	else
	{
		printf("fail");
	}
	return 0;
}
