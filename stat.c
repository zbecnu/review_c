#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
	struct stat s = {0};
	stat("./zhangbing.txt",&s);
	printf("%d\n",s.st_size);
	return 0;
}
