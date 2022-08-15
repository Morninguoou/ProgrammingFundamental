#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[10] = {0};
    float sum = 0;
    printf("Enter :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", n + i);
        printf("%f ", n[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    printf("AVG : %f", sum / 10);
    return 0;
}