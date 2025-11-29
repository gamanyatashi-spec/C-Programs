#include <stdio.h>
int main()
{
	int i,n,prod=0,k;
	printf("enter table value");
	printf("enter table number  value");
	scanf("%d",&n);
	scanf("%d",&k);
	for (i=1;i<=10;i++)
	{
		prod = n*i;
		printf("%d*%d = %d\n",n,i,prod);
	}
	for (i=1;i<=k;i++)
	{
	printf("%d",k);
		}
	return 0;
}
