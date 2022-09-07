#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[255];
    int length;
    printf("Enter :");
    scanf("%s",&str);
    length = strlen(str);
    printf("%d",length);
    return 0;
}