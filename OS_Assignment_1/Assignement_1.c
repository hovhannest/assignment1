#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

void main()
{    
int i = 0;
char inputedString[100];    

fgets(inputedString, 80, stdin);

while(inputedString[i]) 
{
putchar(tolower(inputedString[i]));
i++;
}

}
