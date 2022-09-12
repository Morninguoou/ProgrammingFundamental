#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    if (num <= 0)
        return 1;
    return num * fact(num - 1); //ver ปกติ
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n", fact(num));
    return 0;
}