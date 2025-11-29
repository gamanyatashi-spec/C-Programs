#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter n value\n");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 { 
	 f*=i;
	 } 
	 printf("factorial of %d is %d",n,f);
	 return 0;
}
