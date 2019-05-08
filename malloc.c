#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = calloc(10,sizeof(char));
	char *s2 = calloc(10,sizeof(char));
	strcpy(s1,"123456789");
	s1[2] = 0;
	strcpy(s2,"abcdefg");
	printf("len(s1) is %d\n",strlen(s1));
	s1 =realloc(s1,strlen(s1)+strlen(s2)+1);
	strcat(s1,s2);
	printf("%s\n",s1);
	free(s1);
	free(s2);
	return 0;
}
