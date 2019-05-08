#include <stdio.h>

int main()
{
	FILE *from = fopen("./zhangbing.txt","r");
	FILE *to = fopen("./ppp.txt","w");
	while(!feof(from))
	{
		char buff[1024] = {0};
		fgets(buff,sizeof(buff),from);
		fputs(buff,to);
	}
	fclose(from);
	fclose(to);
	return 0;
}
