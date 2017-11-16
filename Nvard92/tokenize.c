#include <stdio.h>

int main()
{

int c;

while ((c=getchar())!=EOF)
{
if (c==' ' || c=='\n' || c=='\t' || c=='.' || c=='?' || c==';'||c==':'|| c=='!')
	putchar('\n');

else putchar(c);

}

return 0;
}
