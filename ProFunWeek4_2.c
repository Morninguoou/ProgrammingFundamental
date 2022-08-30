#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n2,n3,min,max;
    scanf("%d",&n);
    min = max = n;
    scanf("%d",&n2);
    if (n2 > max)
    {
        max = n2;
    }
    if (n2 < max)
    {
        min = n2;
    }
    scanf("%d",&n3);
    if (n3 > max)
    {
        max = n3;
    }
    if (n3 < max)
    {
        min = n3;
    }
    printf("%d %d %d",max ,n+n2+n3-min-max,min);
    return 0;
}