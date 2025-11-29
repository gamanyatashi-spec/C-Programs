#include <stdio.h>

int main()
{
    int n, org_num, remainder, s = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    org_num = n;
    
    while (n > 0)
    {
        remainder = n % 10;
        s = s * 10 + remainder;
        n = n / 10;   
    }
    
    if (s == org_num)
        printf("%d is a palindrome\n", org_num);
    else
        printf("%d is not a palindrome\n", org_num);
    
    return 0;
}

