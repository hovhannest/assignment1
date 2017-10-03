#include <stdio.h>

int main()
{


	char ch;
	
	while(scanf("%c", &ch) == 1) {
		
		if(ch >= 'A' && ch <= 'Z') {
			ch += 32;
		}

		printf("%c", ch);

	}



	return 0;
}



