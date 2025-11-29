#include <stdio.h>
int main()
{ int i,sum =0,n,a[20];
printf("enter array size\n");
scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 sum = sum + a[i];
 printf("the sum of all array elements is :%d",sum);
 return 0;
}
