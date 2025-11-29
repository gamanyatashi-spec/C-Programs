#include <stdio.h>
int main()
{
	char line[100],b;
	int i;
	printf("Enter string\n",line);
    scanf("%[^\n]s",line);
    // fgets(line,100,stdin);
    
	// gets(line);
    for( i = 0; line[i]!='\0';i++)
    {
    	if (line[i]==' ')
    	printf("\n");
    	else
    	printf("%c",line[i]);
	}
    
	// printf("%s",line);
	//fputs(line,stdout);
	return 0;
		
}
