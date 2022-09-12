#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    int temp = 1;
    for (int i = 2; i <= num; i++)
    {
        temp *= i;
    }
    return temp;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n", fact(num));
    return 0;
}