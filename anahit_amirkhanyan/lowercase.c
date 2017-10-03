#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD
	int i,j;
	char word[1000];

	do{
		j = scanf("%s", word);
		for(i = 0; i<=(word[i]); i++)
=======
	int i, j;
	char word[1000];
	
	do{
		j = scanf("%s", word);
		for(i = 0; i <=(word[i]); i++)
>>>>>>> f231a12115831ad50d39da4156ab997cfb26dc2f
		{
			word[i] = tolower(word[i]);
		}
		printf("%s ", word);
<<<<<<< HEAD
	} while (j != EOF);

	return 0;

=======
	}while (j != EOF);
	
	return 0;
>>>>>>> f231a12115831ad50d39da4156ab997cfb26dc2f
}
