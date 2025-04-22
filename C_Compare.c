#include <stdio.h>
int main()
{
    char a[21], b[21];
    scanf("%s%s", a, b);

    // for (int i = 0; 1;)
    // {
    //     if (a[i] == '\0')
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("%s", b);
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("%s", b);
    //         break;
    //     }
    //     else if (a[i] == '\0' && a[i] == '\0')
    //     {
    //         printf("%s", a);
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    int val = strcmp(a, b);

    if (val < 0)
    {
        printf("%s", a);
    }
    else if (val == 0)
    {
        printf("%s", a);
    }
    else if (val > 0)
    {
        printf("%s", b);
    }

    return 0;
}