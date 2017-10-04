#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <ctype.h>

void sig_handler(int signo)
{
    if (signo == SIGINT)
        write(1, "received SIGINT\n", 16);
}

static int my_strlen(const char* s)
{
    const char *end = s;
    while (*end++) {};
    return end-s-1;
}

int main(void)
{
    if (signal(SIGINT, sig_handler) == SIG_ERR)
        write(1, "\ncan't catch SIGINT\n", 20);
    
    char str[80];
    int i;

    write(1, "Enter a string: ", my_strlen("Enter a string: "));
    fgets(str, 80, stdin);

    i = strlen(str) - 1;
    if(str[i] == '\n')
        str[i] = '\0';
    
    for(i=0; str[i]; i++)
    {
            str[i] = tolower(str[i]);
        }

    write(1, "This is your string: ", my_strlen("This is your string: "));

    if (write(1, str, my_strlen(str)) != my_strlen(str))
    {
            write(2, "There was an error writing to standard out\n", 44);
            return -1;
        }
	printf("\n");
    return 0;
}
