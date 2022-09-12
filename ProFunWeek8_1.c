#include <stdio.h>
#include <stdlib.h>

int fibo(int num)
{
    int x = 1, y = 0;
    for (int i = 0; i < num; i++)
    {
        int temp = x + y;
        x = y;
        y = temp;
    }
    return y;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n", fibo(num));
    return 0;
}