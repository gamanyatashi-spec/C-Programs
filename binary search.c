#include<stdio.h>
#include<stdlib.h>
int main() 
{
   int l,u,mid,n,i,ele,a[100];
   printf("Enter array size:\n");
   scanf("%d",&n);
   printf("Enter array elements:\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("Enter search element\n");
   scanf("%d",&ele);
   l=0;
   u=n-1;
   
   while(l<=u)
   {
   
   mid =  (l+u)/2;
   if(ele == a[mid])
   { 
   printf("element found in %d location",mid+1);
   exit(0);
   }   
   else if(ele<a[mid])
   u = mid-1;
   else if(ele>a[mid])
   l = mid+1;
   }
   printf("Not found");
   return 0;
}
