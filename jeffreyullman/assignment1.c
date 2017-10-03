#include <stdio.h>
#include <string.h>

int main ()
{
	char *str1;
	printf("Please enter the sentence you want to be converted to lower case.\n" );
 	scanf("%[^\n]s", str1);

 	for(int i=0; i < strlen(str1);i++)
 	{
 		if (str1[i] >= 'A' && str1[i] <= 'Z')
 		{
 			str1[i]=str1[i]+'a'-'A';
 		}
 	}
	printf("The lower case sentece is:\n" );

 	printf("%s\n", str1);
 	return 0;

}