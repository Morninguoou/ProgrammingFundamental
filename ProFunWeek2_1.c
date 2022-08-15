#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    printf("Enter :");
    scanf("%f %f %f %f %f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    printf("%f %f %f %f %f %f %f %f %f %f\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
    printf("%f", (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10);
    return 0;
}