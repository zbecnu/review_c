#include <stdio.h>
#include <string.h>
void my_fputs(const char *path)
{
	FILE *file = NULL;
	file =fopen(path,"w+");
	if(file ==NULL)
	{
		perror("my_puts fopen error");
		return; 
	}
	

	char buff[] = "this is a test for my_fputs";
	
	int i = 0;
	for(i =0;i<strlen(buff);i++)
	{
		 fputc(buff[i],file);
	}	
	
	fputc('\n',file);
	if(file != NULL)
	{
		fclose(file);
		file = NULL;
	}
		
}

int main01()
{
	FILE *file = NULL;
	file = fopen("./myfile.txt","r+");
	if( file == NULL)
	{
		perror("fopen");
		return -1;
	}	
	if(file != NULL)
	{
		fclose(file);
		file = NULL;
	}
	
	
	fputc('c',stdout);
	return 0;
}

int main()
{
	my_fputs("./hahaha.txt");
	return 0;
}
