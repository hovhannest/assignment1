#include <stdio.h>
#include <stdlib.h>


int main()
{
	char word[1000];
	scanf("%s", word);
	int i;
	for(i = 0; i <=(word[i]); i++)
	{
		word[i] = tolower(word[i]);
	}

	printf("%s\n", word);
}
