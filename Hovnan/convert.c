# include <stdio.h>

int main()
{
	    char array[100];
	    printf("Enter a string\n");
	    scanf("%s", array);

			int i=0;
			while(array[i]){
				if(array[i]>='A' && array[i]<='Z'){
					array[i] = array[i]-'A'+'a';
				}
				i++;
			}

	    printf("lowercase string %s\n",array);
	return 0;
}
