#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char string[500];
	int i=0;
	printf("Enter the string : ");
	scanf("%s",string);
	while(string[i])
	{
		string[i] = tolower(string[i]);
		i++;
	};
	printf("The string in lowercase : %s", string);
	printf("\n");
	return 0;
}
