#include <stdio.h>
int main()
{
	int i, flag=0,ele,a[10];
	printf("enter array elements\n");
	for(i=0;i<4;i++)
    scanf("%d",&a[i]);

	printf("enter search element\n");
	scanf("%d",&ele);
	printf("\n");
	
	for(i=0;i<4;i++)
    {
		if(ele == a[i])
	{
	printf("search element %d is in index %d",ele,i);
	flag++;
	break;
	 }
	
}
	if(flag==0)
	printf("search element not found");
	return 0;
}
