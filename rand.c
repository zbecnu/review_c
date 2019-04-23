#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int t = (int)time(NULL);
    srand(t);
    int i;
    for(i = 0; i< 20 ;i++)
    {
        printf("%d\n",rand()%101);
    }
    return 0;     
}
