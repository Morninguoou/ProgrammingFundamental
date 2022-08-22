#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    scanf("%f",&n);
    if (n == (int)n)
        printf("int");
    else
        printf("float");
}