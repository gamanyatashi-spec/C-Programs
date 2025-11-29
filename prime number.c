#include <stdio.h>
int main()
{ 
int i,n,f=2;
printf("enter n value:");
scanf("%d",&n);

for(i=2;i<n;i++)
{
	if (n%i==0)
	{
		f++;
		break;
	}
	
}
	if (f==2)
	printf("%d is a prime ",n);
	else
	printf("%d is not a prime number",n);
    return 0;
}
