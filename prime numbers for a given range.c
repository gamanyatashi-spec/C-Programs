#include <stdio.h>
int main()
{ 
    int i,j,start,end,f=2;
      printf("enter the rage\n");
    scanf("%d%d",&start,&end);
        for(i=start;i<end;i++)
{
     f=2;
      for(j=2;j<i;j++)
{
	if (i%j==0)
	{
		f++;
		break;
	}	
}
	if (f==2)
	printf("%d\n",i);
}

    return 0;
}
