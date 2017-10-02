#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main(){
  char * args;
  scanf("%[^\n]%*c", args);
  for(int i = 0; i < strlen(args); i++){
         if(isascii(args[i])){
                 args[i] =  tolower(args[i]);
         }
  }
  printf("%s", args);
}
