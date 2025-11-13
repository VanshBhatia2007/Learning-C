// Write a program to compare the contents of two files by taking names of the 
// files through command line arguments.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if(argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");

    if(file1 == NULL || file2 == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    int ch1, ch2;
    int areIdentical = 1;

    while(1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if(ch1 == EOF && ch2 == EOF) {
            break; // Both files ended
        }
        if(ch1 != ch2) {
            areIdentical = 0; // Files differ
            break;
        }
    }

    if(areIdentical) {
        printf("The files are identical.\n");
    } else {
        printf("The files are different.\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}