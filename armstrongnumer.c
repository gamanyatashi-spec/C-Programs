#include <stdio.h>
#include <math.h>

int main()
{
    int num, org_num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    org_num = num;  // store original number

    while (num != 0)
    {
        remainder = num % 10;
        sum += pow(remainder, 3);
        num /= 10;
    }

    if (org_num == sum)
        printf("%d is an Armstrong number\n", org_num);
    else
        printf("%d is not an Armstrong number\n", org_num);

    return 0;
}

