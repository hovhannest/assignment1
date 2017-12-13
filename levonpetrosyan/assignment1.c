#include <stdio.h>
 #include <string.h>
 
 int main ()
 {
 	char *str;
 	printf("Please write a sentence.\n" );
  	scanf("%[^\n]s", str);
  	for(int i=0; i < strlen(str);i++)
  	{
  		if (str[i] >= 'A' && str[i] <= 'Z')
  		{
  			str[i]=str[i]+'a'-'A';
  		}
  	}
 	printf("TThe result is:\n" );
  	printf("%s\n", str);
  	return 0;
 }