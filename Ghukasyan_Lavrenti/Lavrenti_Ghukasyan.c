#include <stdio.h>
 #include <string.h>
 
 int main ()
 {
 	char string[100];
 	printf("Write the sentence with uppercase letters:");
  	scanf("%s", string);
  	for(int i=0; i < strlen(string);i++)
  	{
  		if (string[i] >= 'A' && string[i] <= 'Z')
  		{
  			string[i]=string[i]+'a'-'A';
  		}
  	}
 	
  	printf("%s\n", string);
  	return 0;
 }
