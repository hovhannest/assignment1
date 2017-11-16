#include <stdio.h>
#include <ctype.h>

int main()
{
  int c;

  do
  {
    c=getchar();
    putchar(tolower(c));
  } while (c!=EOF);

  return 0;
}
