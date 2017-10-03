#include <stdio.h>
int main()
{
	char str[100];
	printf("Input the string: \n");
	scanf("%s", str);
	char *a = str;

	while(*a)
	{
		if (*a >= 'A' && *a <= 'Z')
			*a = *a - ('A' - 'a');
		putchar(*a);
        ++a;

        //alternative
        //using logical OR
		//putchar(*a | 0x20);
        //a++;
	}
	putchar('\n');
}