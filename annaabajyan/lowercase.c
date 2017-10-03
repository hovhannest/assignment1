#include <stdio.h>
#include <string.h>
void String_Lower(char []);
/*int main() {
char string[50];
printf("\n Enter a string to convert it into Lowercase\n");
scanf("%s",string);

int i;
for (i=0; i <=strlen(string); i++) {
  if (string[i] >=65 && string[i] <= 90)
    string[i]=string[i] + 32;
    }
    printf("\n Lowercase string is = %s\n ",string);
    return 0;
}*/ 
int main () {
char str[70];
printf("\n Enter a string to convert it into Lowercase : \n");
scanf("%s",str);

String_Lower(str);
printf("\n Lower case string is = %s\n", str);
return 0;
}

void String_Lower(char string[]) {
int i=0;
while (string[i] != '\0')
{
if (string[i] >= 'A' && string[i] <= 'Z') {
   string[i] = string[i] + 32;
   }
   i++;
  }
}  

