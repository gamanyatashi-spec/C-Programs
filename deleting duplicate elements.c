#include<stdio.h>
int main()
{
	int a[80],n,i,j,k;
	printf("Enter array size\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
	
	 {
	 
	     for(j=i+1;j<n;j++)
	     
	         if(a[i]==a[j])
           {   for(k=j;k<n;k++)
              {
			    a[k]=a[k+1];
                n--;
              }
		   }
       }
	}
	 printf("New array elements are:\n");
	 for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	 return 0;
}
	
