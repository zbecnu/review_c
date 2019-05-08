#include <stdio.h>

int main()
{
	int res =  rename("./zhangbing.txt","./zhangbing112233.txt");
	printf("%d\n",res);
	return 0;
}
