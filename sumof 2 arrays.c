#include <stdio.h>
int main()
{
	int a[20],b[20],c[20],i,n;
	printf("enter array A size\n");
	scanf("%d",&n);
	printf("enter array A elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter array B size\n");
	scanf("%d",&n);
	printf("enter array B elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	
	for(i=0;i<n;i++)
	c[i]=a[i]+b[i];
	printf("%d\n",c[i]);
	
	return 0;
}
