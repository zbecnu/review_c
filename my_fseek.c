#include <stdio.h>

#define SIZE 1024*4


int main()
{
	FILE *file = fopen("./hahaha.txt","r");
	fseek(file,0,SEEK_END);
	long length =  ftell(file);
	printf("%d\n",length);
	return 0;
}
