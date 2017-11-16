#include <stdio.h>
#include <string.h>

int main()
{

char string[]="School: is not; a place? for# smart; people";

char *printchar;

	printchar=strtok(string, ",.- ?:;!#/");

while (printchar!=NULL)
{
	printf("%s\n", printchar);

	printchar=strtok(NULL,",.- ?:;!#/");
}

return 0;
}
