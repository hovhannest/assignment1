#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KRED  "\x1B[31m"
const int maxLength = 100;

void err(char *text) {
    printf("%s Error: %s\n", KRED, text);
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
   
   int n = 0;
   int m = 0;
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
    
    char f1[maxLength][maxLength];
    char f2[maxLength][maxLength];
    
    char *pos;
    while(fgets(line1, maxLength, (FILE*) fp1)) {
        strcpy(f1[n], line1);
        if ((pos=strchr(f1[n++], '\n')) != NULL){
                *pos = '\0';
        }
    }

    while(fgets(line2, maxLength, (FILE*) fp2)) {
        strcpy(f2[m], line2);
        if ((pos=strchr(f2[m++], '\n')) != NULL){
                *pos = '\0';
        }
    }

    int haveComon;
    for(int i=0; i<n; i++) {
        haveComon = 0;
        for(int j=0; j<m; j++) {
            if(strcmp(f1[i], f2[j]) == 0) {
                haveComon = 1;
                break;
            }
        }
        if(!haveComon) {
            printf("%s\n", f1[i]);
        }
    }

    for(int i=0; i<n; i++) {
        haveComon = 0;
        for(int j=0; j<m; j++) {
            if(strcmp(f1[j], f2[i]) == 0) {
                haveComon = 1;
                break;
            }
        }
        if(!haveComon) {
            printf("%s\n", f2[i]);
        }
    }

    fclose(fp1);
    fclose(fp2);
}