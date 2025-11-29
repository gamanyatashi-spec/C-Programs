#include <stdio.h>
int main()
{
	int i,n,prod=0;
	printf("enter table value");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{`
		prod = n*i;
		printf("%d*%d = %d\n",n,i,prod);
	}
	return 0;
}
