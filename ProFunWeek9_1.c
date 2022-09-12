#include <stdio.h>
#include <stdlib.h>

int countstr(char input[])
{
    int length = 0;
    for (size_t i = 0; input[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char input[255];
    scanf("%s", input);
    int n = countstr(input);
    for (size_t i = 0; i < n/2; i++)
    {
        swap(input+i,input+n-i-1);
    }
    printf("%s",input);
    return 0;
}