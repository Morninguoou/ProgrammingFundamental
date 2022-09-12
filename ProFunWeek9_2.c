#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[255] = {0};
    int i = 0;
    do
    {
        scanf("%c",input+i);
    } while (input[i] != ' ' && input[i++] != '\n'); // i++ ใช้ก่อนบวก ++iบวกก่อนใช้
    for (int n = i-2; n >= 0 ; n--)
        printf("%c",input[n]);
    return 0;
}