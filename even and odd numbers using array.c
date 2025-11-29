#include <stdio.h>
int main()
{ int a[10],i;
  int even=0,odd=0;
  
  printf("enter array elements\n");
   for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    if(a[i]%2==0)
    even++;
    else 
     odd++;

}
printf("even elements are %d",even);
printf("\n odd elements are %d",odd);
return 0;
}
