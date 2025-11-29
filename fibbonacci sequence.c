#include <stdio.h>
int main()
{
    int a = 1, b = 1, c, n, i;
    printf("Enter n value: ");
    scanf("%d", &n);

    printf("%d\n%d\n", a, b);  // print first two numbers

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }

    return 0;
}

