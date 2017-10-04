#include <stdio.h>
#include <stdlib.h>

#define KRED  "\x1B[31m"
const int maxLength = 10000;

void err(char *text) {
    printf("%s Error: %s\n", KRED, text);
}

int readFromFile(char *name, FILE *fp) {
    if ((fp = fopen(name, "r")) == NULL) {
        err("Error opening file, no such file");
        err(name);
        return 1;
    }
    return 0;
}



int main( int argc, char *argv[] )  {
    if( argc > 3 ) {
        err("Too many arguments .\n");
    }
    if(argc != 3) {
        err("You need to provide exactly 2 arguments.\n");
        return 1;
    }
   char *file1 = argv[1];
   char *file2 = argv[2];
   FILE *fp1;
   FILE *fp2;
   char line1[maxLength];
   char line2[maxLength];
   
   int i=0;
   int j=0;
   // https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm

   
   if ((fp1 = fopen(file1, "r")) == NULL) {
        err("Error opening file, no such file");
        err(file1);
        return 1;
    }

    if ((fp2 = fopen(file2, "r")) == NULL) {
        err("Error opening file, no such file");
        err(file2);
        return 1;
    }
    
    
    while(fgets(line1, maxLength, (FILE*) fp1)) {
        while(fgets(line2, maxLength, (FILE*) fp2)) {
            
        }
    }

    fclose(fp1);
    fclose(fp2);
}
