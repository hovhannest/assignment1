#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#define STDIN  0
#define STDOUT 1

/*

Tokenizer works in two ways. it is either run without argument, then it will tokenize everything until cntrl+c is caught
Then it will print a goodbye message and wait for an enter to exit
Also tokeizer can be called with attributes. Then it will tokenize the words separating them from punctuation marks. 

*/

volatile sig_atomic_t isDone; // we use volatile since in the program we catch cntrl+C for completion

/* exit catches Interrupt signal. prints goodbye message. then sets a volatile sigatomic var to 1 so while in print_stream evaluates to false*/
void exit(int a)
{	
  char bye[] = {"\nCntr C was pressed. It's time for us to part. press Enter\n"};
  write(1,bye,sizeof(bye));
  isDone = 1;
  /* alternatively we could have used _exit(0); to exit the program right away. It seems a better idea but I wanted to use volatile sigatomic vars for practise :D*/ 
}

/* If no arguments were provided print_stream will activate. It will tokenize everything until cntrl+C is pressed.*/
void print_stream()
{
 char buf[1];
 signal(SIGINT, exit);		// catching the signal
 isDone = 0;			// subatomic volatile var to determine if cntr+C was pressed or not.
 int hasEnter = 0;
 while( !isDone && read(0, buf, sizeof(buf))>0 ) 
  	{	
  	
	if((buf[0]>96 && buf[0]<123)||(buf[0]>47 && buf[0]<58)    
		|| (buf[0]>64 && buf[0]<91)) 	// Check if character is number or letter prints it
 		{
		  write(1, buf, 1);
		  hasEnter=0;
		}
	else if(!hasEnter) //if(buf[0] ==32) only " " trigers new token
		{
		  write(1,"\n",2);	
		  hasEnter = 1;	//if we are already in the new line we don't won't to print any more new lines.
		}
  }
	fflush(stdout);
	return;
}
void print_sentence(char* string)	//receives character string and tokenizes using the same method in print_stream.
{
	int hasEnter=0;
	for(char * iter = string; *iter ;iter++ ) //until 0 termination character is reached we iterate
  	{	
	
  	
	if((*iter>96 && *iter<123)||(*iter>47 && *iter<58)
		|| (*iter>64 && *iter<91))
 		{
		  write(1, iter, 1);
		  hasEnter=0;
		}
	else if(!hasEnter)   
		{
		  printf("\n");
		  hasEnter = 1;
		}
  	}
	fflush(stdout);
}

int main(int argc, char* argv[])
{	

	if(argc >=2) 	// if there are many arguments we will tokenize them too.
	{
	  for(int i = 1; i<argc;i++)
		{ 
			char* string = argv[i];
			print_sentence(string);
		}	
	}
	else if(argc ==1) 
	{
	  print_stream();
	}
	printf("\n");
  	fflush(stdout);

	return 0;
}
