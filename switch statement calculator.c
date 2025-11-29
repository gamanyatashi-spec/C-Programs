#include <stdio.h>
int main()
{  
    int b = 4,c = 8;
	char a;
	printf("enter + or - or * or /\n");
	scanf("%c",&a);
	switch (a)
	{ 
	case '+' : printf("%d",b+c);
	          break;
	case'-': printf("%d",b-c);
	          break;
	case '*' : printf("%d",b*c);
	          break;
	case '/' : printf("%d",b/c);
	          break;
	          
	}
	return 0;
}
