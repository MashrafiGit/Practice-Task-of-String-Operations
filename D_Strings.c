#include <stdio.h>
int main()
{
    char a[11], b[11];
    scanf("%s%s", a, b);

    
    int length_a = 0;
    int length_b = 0;
    
    for (int i = 0; a[i] != '\0'; i++)
    {
        length_a++;
    }
    
    for (int i = 0; b[i] != '\0'; i++)
    {
        length_b++;
    }
    
    printf("%d %d\n", length_a, length_b);

    char c[length_a+length_b];

    for (int i = 0; i < length_a; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < length_a + length_b; i++)
    {
        c[i+length_a] = b[i];
    }

    printf("%s\n", c);

    
    int tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s %s", a, b);


    return 0;
}