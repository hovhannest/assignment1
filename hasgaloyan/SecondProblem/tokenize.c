#include <stdio.h>

int main()
{
	char * input;
        /*getting a string with spaces*/
	scanf("%[^\n]%*c", input);	
	int isTerminalSymbol = 0;
	
	if(input == NULL || *input=='\0')
	{
		printf("No string was passed to the program.");
	}
	else
	{
		while (*input)
		{
			int ascii = (int)*input;
		
                        /*we print only letters, numbers and apostroph sign, because "it's" or "I'm" should be printed as a word*/
			if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122) || (ascii>=48 && ascii<=57) || ascii==39)
			{ 
				printf("%c", input[0]);
				isTerminalSymbol = 0;
			}
			else 
			{
/*checking if the previously printed character is terminal symbol: we don't want 3 new lines for 3 consequent terminal symbols*/
				if(!isTerminalSymbol)
				{
					printf("\n");
					isTerminalSymbol = 1;
				}
			}
			input++;
		}
	}
	
	return 0;
}
