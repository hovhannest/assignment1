#include <stdio.h>

int main()
{
	char *charecter;
	scanf("%[^\n]%*c", charecter);
		
	while(*charecter)
		{
			putchar( *charecter | 0x20); // Add 32 to shift to ASCII lowercase char
        	charecter++;
		}		
		printf("%s", charecter);
	//}
	return 0;	 
}
