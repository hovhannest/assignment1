#include <stdio.h>
 #include <string.h>
 
 int main ()
 {
 	char *str;
 	printf("Please enter the sentence with uppecase letters.\n" );
  	scanf("%[^\n]s", str);
  	for(int i=0; i < strlen(str);i++)
  	{
  		if (str[i] >= 'A' && str[i] <= 'Z')
  		{
  			str[i]=str[i]+'a'-'A';
  		}
  	}
 	printf("The converted sentece is:\n" );
  	printf("%s\n", str);
  	return 0;
 }