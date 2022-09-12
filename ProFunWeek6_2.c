#include <stdio.h>
#include <stdlib.h>
#define inrange(x, a, b) (a <= x && x <= b)
char toUpper(char ch)
{
    if (inrange(ch, 'a', 'z'))
        ch = ch - 'a' + 'A';
    return ch;
}
int main()
{
    char input[255];
    scanf("%s", input);
    int vowel[6] = {0};
    for (size_t i = 0; input[i] != '\0'; i++)
    {
        char x = toUpper(input[i]) - 'A'; // ทำให้ตัวอักษรเป็นตัวเลข
        if ((x % 10 % 4 == 0) && x != 10 && x != 18 && x != 24)//0 4 8 14 20 (a e i o u)
            vowel[x / 4]++;
    }
    printf("a = %d \ne = %d \ni = %d \no = %d \nu = %d \n", vowel[0], vowel[1], vowel[2], vowel[3], vowel[5]);
    return 0;
}