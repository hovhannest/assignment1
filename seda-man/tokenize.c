#include <stdio.h>

int main()
{
	char ch;
	int charPrinted = 0;
	while(scanf("%c", &ch) == 1) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
			(ch >= '0' && ch <= '9')) {
			printf("%c", ch);
			charPrinted = 1;
		} else {
			if(charPrinted == 1) {
				charPrinted = 0;
				printf("\n");
			}
		}
			
	}
	return 0;
}
