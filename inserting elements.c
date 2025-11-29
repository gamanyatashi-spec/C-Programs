#include<stdio.h>
 int main()
 {
 int a[80],n,ele,i,pos;
 printf("Enter array size:\n");
 scanf("%d",&n);
 printf("Enter array elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter element to be added :\n");
 scanf("%d",&ele);
 printf("Enter position:\n");
 scanf("%d",&pos);
 for(i=n;i>pos-1;i--)
 a[i]=a[i-1];
 a[i]=ele;
 n++;
 printf("\n Elements are :\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 return 0;
}
