#include <stdio.h>
#include <stdlib.h>

int fibo(int num)
{
    if (num <= 0)
        return 0;
    if (num <= 2)
        return 1;
    return fibo(num - 1) + fibo(num - 2);
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n", fibo(num));
    return 0;
}