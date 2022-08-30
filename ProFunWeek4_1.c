#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int temp1 = 0;
    int temp2 = 0;
    if (a >= b) // a b
    {
        if (c >= a)
        {
            temp1 = a;
            temp2 = b;
            a = c;
            b = temp1;
            c = temp2; // c a b
        }
        else if (c <= a && c >= b) // a c b
        {
            temp1 = b;
            b = c;
            c = temp1;
        }
    }
    else if (b >= a) // b a
    {
        if (c >= b) // c b a
        {
            temp1 = a;
            a = c;
            c = temp1;
        }
        else if (c<=b && c>=a) // b c a
        {
            temp1 = a;
            a = b;
            b = c;
            c = temp1;
        }
        else // b a c
        {
            temp1 = a;
            a = b;
            b = temp1;
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}