#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter :");
    scanf("%s",&str);
    // for (; str[i] != '\0';){i++;}
    while (str[++i] != '\0');
    printf("%d",i);
    
    return 0;
}