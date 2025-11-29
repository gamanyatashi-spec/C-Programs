//code to print the sum of the digits in a given number
#include<stdio.h>
int main()
{
     int num,sum = 0,digit;
     printf("enter a number\n");
     scanf("%d", &num);

    while (num!=0)
{
    digit=num%10;
    sum += digit;
    num/=10;
}
    printf("the sum of the digits is :%d",sum);
    return 0;
}
