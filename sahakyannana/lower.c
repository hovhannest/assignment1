#include<stdio.h>
#include<string.h>

int main(){
	char string[30];
	scanf("%s", string);
	
	int i;
	for (i =0; i <= strlen(string); i++){
		if(string[i] >= 65 && string[i] <=90)
			string[i] = string [i] + 32;
		}
	printf("%s\n", string);
	return 0;
}

