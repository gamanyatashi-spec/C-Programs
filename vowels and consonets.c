#include<stdio.h>
#include<ctype.h>
int main()
{
	char line[80];
	int i,vowels = 0,consonents=0, digits=0;
	printf("enter string\n");
	scanf("%[^\n]s",&line);
	
	for(i=0;line[i]!='\0';i++)
	{
		line[i] = toupper(line[i]);// convert the entire line to lower case
		
		if(line[i]=='a' ||  line[i]=='e' ||  line[i]=='i' ||  line[i]=='o' ||  line[i]=='u' )
	vowels++;
	else if (line[i] > 'a' && line[i] < 'z')
	consonents++;
	else if (line[i] > '0' && line[i] < '9')
	digits++;
	}
	
	printf("vowels = %d",vowels);
		printf(" consonents= %d",consonents);
		printf(" digits = %d",digits);
	
	return 0;
}
