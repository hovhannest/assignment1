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
   printf("test-1");
   char *file1 = argv[1];
   char *file2 = argv[2];
   printf("test0");
   FILE *fp1;
   printf("test1");
   FILE *fp2;
   printf("test2");
   int err1 = readFromFile(file1, fp1);
   printf("test3");
   int err2 = readFromFile(file2, fp2);
   printf("test4");
   if(err1 || err2) {
       return err1 || err2;
   }
   printf("test5\n");
   char line1[maxLength];
   char line2[maxLength];
   
   int i=0;
   int j=0;
   // https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm

   
    FILE* fp;
    fp = fopen(file1, "r");

    while(fgets(line1, maxLength, (FILE*) fp)) {
        printf("%s\n", line1);
    }


    fclose(fp);

    // fclose(fp1);
    // fclose(fp2);
}
