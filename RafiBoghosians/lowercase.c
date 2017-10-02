#include<stdio.h>
#include<string.h>

int main(){

	printf("Please enter your characters: ");
	char str[30];
	scanf("%s",str);

	int index;
	
	
	for (index=0; index <= strlen(str); index++)
	{

	/* check if our input characters are  between ASCII uppercase range*/ 
		if(( str[index] >=65 ) && (str[index] <= 90))
		{
			/* it will add 32 to the character to  have the same symbol in lowercase */
			str[index] = str[index] + 32;
		}else{
			/* Just ignore the index which is not in the range of 65 and 90*/		
			str[index] = str[index];

		}		
	}	
	
	printf("\nThe String in Lowercase = %s\n",str);

return 0;
}

