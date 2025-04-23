#include <stdio.h>
int main()
{
    char a[11], b[11];
    scanf("%s%s", a, b);

    int length_a = strlen(a);
    int length_b = strlen(b);
    
    printf("%d %d\n", length_a, length_b);


    char c[length_a+length_b+1];
    c[0] = '\0';
    strcat(c, a);
    strcat(c, b);

    printf("%s\n", c);

    
    int tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%s %s", a, b);


    return 0;
}