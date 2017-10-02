#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	char word[1000];

	while (j != EOF){
		j = scanf("%s", word);
		for(i = 0; i<=(word[i]); i++)
		{
			word[i] = tolower(word[i]);
		}
		printf("%s ", word);
	}

	return 0;

}
