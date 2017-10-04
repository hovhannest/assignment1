#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define maxlen 1050

char line1[maxlen], line2[maxlen];
bool f1_over, f2_over;

bool read_line(char * s, FILE * F)
{
    return (fgets(s, maxlen, F) == NULL);
}

int compare_str(char * A, char * B)
{
    int Alen = strlen(A);
    int Blen = strlen(B);
    int mi = Alen < Blen ? Alen : Blen;
    for(int i = 0; i < mi; i++)
    {
        if(A[i] < B[i]) return -1;
        if(A[i] > B[i]) return 1;
    }
    if(Alen < Blen) return -1;
    return Blen > Alen;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error: wrong number of arguments\n");
        printf("Example: ./compare a.txt b.txt\n");
        return 0;
    }
    
    FILE * f1 = fopen(argv[1], "r");
    if(f1 == NULL)
    {
        printf("could not read file1\n");
        return 0;
    }
    FILE * f2 = fopen(argv[2], "r");
    if(f2 == NULL)
    {
        printf("could not read file2\n");
        return 0;
    }
    
    if(fgets(line1, maxlen, f1) == NULL) f1_over = true;
    if(fgets(line2, maxlen, f2) == NULL) f2_over = true;
    
    
    while(!f1_over || !f2_over)
    {
        if(f1_over)
        {
            printf("%s", line2);
            if(fgets(line2, maxlen, f2) == NULL) f2_over = true;
            if(f2_over) printf("\n");
            continue;
        }
        if(f2_over)
        {
            printf("%s", line1);
            if(fgets(line1, maxlen, f1) == NULL) f1_over = true;
            if(f1_over) printf("\n");
            continue;
        }
        int cmp = compare_str(line1, line2);
        if(cmp == -1)
        {
            printf("%s", line1);
            if(fgets(line1, maxlen, f1) == NULL) f1_over = true;
            if(f1_over) printf("\n");
        }
        if(cmp == 1)
        {
            printf("%s", line2);
            if(fgets(line2, maxlen, f2) == NULL) f2_over = true;
            if(f2_over) printf("\n");
        }
        if(cmp == 0)
        {
            if(fgets(line1, maxlen, f1) == NULL) f1_over = true;
            if(fgets(line2, maxlen, f2) == NULL) f2_over = true;
        }
    }
    
    fclose(f1);
    fclose(f2);
    
    return 0;
}