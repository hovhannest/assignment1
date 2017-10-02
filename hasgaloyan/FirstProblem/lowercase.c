#include <stdio.h>

int main()
{
	char *input;
	scanf("%[^\n]%*c", input);
	
	if(input == NULL || *input=='\0')
	{
		printf("%s", "No strings were passed as arguments.");
	}
	else
	{	
		while(*input)
		{
			putchar( *input | 0x20);
        		input++;
		}
		
		printf("%s", input);
		printf("\nAll characters are lowercase :)");
	}
	return 0;	 

}
