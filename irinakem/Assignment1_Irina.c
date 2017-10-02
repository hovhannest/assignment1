#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int main(void)
{    
int i = 0;
char str[80];    
char inputRequest[] = "Enter some string value";
char outputComment[]= "Your string value in lower case is";

write(1, inputRequest, strlen(inputRequest));
fgets(str, 80, stdin);
    
write(1, outputComment, strlen(outputComment));

while(str[i]) 
{
putchar(tolower(str[i]));
i++;
}

return 0;
}