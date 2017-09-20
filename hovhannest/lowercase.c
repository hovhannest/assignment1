#include <stdio.h>
#include <unistd.h>
#include <string.h>

char lower(char a)
{
	if( (a >= 0x41) && (a <= 0x5A) )
		a |= 0x20; // ASCII upper and lower case are 0x20 appart from each other
	return a;
}

int main(int argc, char **argv)
{
	char c[1];
	if(argc > 1)
	{
		for(int i = 1; i < argc; i++)
		{
			for(int l = 0; l < strlen(argv[i]); l++)
				printf("%c", lower(argv[i][l]));
			printf(" ");
		}
	}
	else
	{
		while( read(0, c, sizeof(c)) )
		{
			printf("%c", lower(c[0]));
		}
	}	
	
	return 0;
}
