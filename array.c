#include <stdio.h>

int  main()
{
    int a[] = {23,231453,5,756,8,9,23,46,3,12,876,8,67213,56213};
    int i,j;
    for(i = 0; i< sizeof(a)/sizeof(a[0]);i++)
    {
        for(j = 1; j< sizeof(a)/sizeof(a[0])-i;j++)
        {
            if(a[j] < a[j-1])
            {
                int tmp =  a[j];
                a[j] = a[j-1];
                a[j-1]= tmp;

            }
        }
    }

    for(i =0;i<sizeof(a)/sizeof(a[0]);i++)
    {
     printf("a[%d] is %d\n",i,a[i]);
    }
    return 0;

}

