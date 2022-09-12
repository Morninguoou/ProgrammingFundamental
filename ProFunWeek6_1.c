#include <stdio.h>
#include <stdlib.h>
void checkVowel(char str[],int *return_a,int *return_e,int *return_i,int *return_o,int *return_u)
{
    int a=0,e=0,x=0,o=0,u=0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a')
            a++;
        else if (str[i] == 'E' || str[i] == 'e')
            e++;
        else if (str[i] == 'I' || str[i] == 'i')
            x++;
        else if (str[i] == 'O' || str[i] == 'o')
            o++;
        else if (str[i] == 'U' || str[i] == 'u')
            u++;
    }
    *return_a = a;
    *return_e = e;
    *return_i = x;
    *return_o = o;
    *return_u = u;
}
int main()
{
    char inp[255];
    int a=0,e=0,x=0,o=0,u=0;
    scanf("%s",inp);
    checkVowel(inp,&a,&e,&x,&o,&u);
    printf("a = %d \ne = %d \ni = %d \no = %d \nu = %d \n",a,e,x,o,u);
    return 0;
}