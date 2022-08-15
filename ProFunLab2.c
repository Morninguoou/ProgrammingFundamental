#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// Pseudo code
// 1.กำหนดค่า n
// 2.รับค่า n เข้ามา
// 3.ทำงานซ้ำโดยเริ่มจากกำหนดให้ค่า i=1 วนซ้ำจนถึง n
//     1.ทำงานซ้ำิโดยเริ่มจากกำหนดให้ค่า j=1 วนซ้ำจนถึง n
//         1.สร้างเงื่อนไข ถ้า i = 1 หรือ n หรือ j = 1 หรือ n
//             1.แสดงผลออกมาเป็น "*"
//         2.เงื่อนไขนอกจากนั้น
//             1.แสดงผลออกมาเป็น " "
//     2.ขึ้นบรรทัดใหม่

#include <stdio.h>
int main()
{
    int n1, n2, ans;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if (n1 > n2)
    {
        for (int i = 1; i <= n1; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                ans = i;
        }
    }
    else if (n2 > n1)
    {
        for (int i = 1; i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                ans = i;
        }
    }
    printf("%d",ans);
    return 0;
}
// pseudo code
// 1.สร้างตัวแปร n1 n2 ans
// 2.รับค่า n1
// 3.รับค่า n2
//     1.สร้างเงื่อนไขถ้า n1 มากกว่า n2
//         1.ทำงานซ้ำิโดยเริ่มจากกำหนดให้ค่า i=1 วนซ้ำจนถึง n1
//             1.สร้างเงื่อนไข ถ้า i หาร n1 และ n2 ลงตัว
//                 1.กำหนดให้ ans = i
//     1.สร้างเงื่อนไขถ้า n2 มากกว่า n1
//         1.ทำงานซ้ำิโดยเริ่มจากกำหนดให้ค่า i=1 วนซ้ำจนถึง n2
//             1.สร้างเงื่อนไข ถ้า i หาร n1 และ n2 ลงตัว
//                 1.กำหนดให้ ans = i
// 4.แสดงค่า ans ออกมา

// #include <stdio.h>
// #include <stdlib.h>

int main()
{
    int num, first, con;
    int div = 2;
    printf("Enter :");
    scanf("%d", &num);
    while (div <= num)
    {
        if (num % div == 0)
        {
            first = div;
            printf("%d", first);
            break;
        }
        else
            div += 1;
    }
    con = num / div;
    while (con != 1)
    {
        if (con % div == 0)
        {
            printf(" x %d", div);
            con /= div;
        }
        else
            div += 1;
    }
    return 0;
}
// pseudo code
// 1.สร้างตัวแปร num first con
// 2.กำหนดค่า div = 2
// 3.รับค่าไปเก็บไว้ที่ตัวแปร num
// 4.ทำงานซ้ำจนกว่า div<=num
//     1.ถ้า num หารด้วย div ลงตัว
//         1.ให้ first = div
//         2.แสดงผลค่า div ออกมา
//         3.จบการทำงานซ้ำ
//     2.นอกนั้น
//         1.div เพิ่มขึ้น 1
// 5.ให้ con = num / div
// 6.ทำงานซ้ำจนกว่า con จะไม่เท่ากับ 1
//     1.ถ้า con หารด้วย div ลงตัว
//         1.แสดงค่า x div ออกมา
//         2.con หารด้วย div
//     2.นอกนั้น
//         1.div เพิ่มขึ้น 1


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num,div;
//     scanf("%d",&num);
//     div =2;
//     while (num != 1)
//     {
//         while(num % div == 0)
//         {
//             printf("%d",div);
//             num/=div;
//         }
//         div+=1;
//     }
//     return 0;
// }

// code พี่
//  #include <stdio.h>
//  int main()
//  {
//      int num;
//      printf("Enter : ");
//      scanf("%d", &num);

//     int dvi = 2;
//     while (dvi <= num / 2)
//     {
//         if (num % dvi == 0)
//         {
//             num /= dvi;
//             printf("%d x", dvi);
//         }
//         else
//         {
//             dvi++;
//         }
//     }
//     printf("%d\n", num);
//     return 0;
// }