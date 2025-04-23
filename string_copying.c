#include <stdio.h>
int main()
{
    char a[11];
    char b[11];

    scanf("%s %s", a, b);


    int length = 0;

    for (int i = 0; i < 11; i++)
    {
        length++;
    }

    for (int i = 0; i <= length; i++)
    {
        a[i] = b[i];
    }

    printf("%s", a);

    return 0;
}