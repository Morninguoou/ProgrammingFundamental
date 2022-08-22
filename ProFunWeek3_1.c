#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f",&n);
    if (n == ceil(n))
        printf("int");
    else
        printf("float");
}