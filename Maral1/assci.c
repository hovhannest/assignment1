#include<stdio.h>

int main()
{

char c;

printf("Enter a character:");


while(scanf("%c",&c)==1){

	if(c>='A'&& c<='Z' ){

      c=c+32;
	}

     
printf("ASCII value of %c=%d",c,c);

}

return 0;

}




