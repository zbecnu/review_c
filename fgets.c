#include <stdio.h>

int main()
{
    char a[20] = {0};
    fgets(a,sizeof(a),stdin);
    printf("%s",a);
    return  0;
}
