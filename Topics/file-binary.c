// explain fseek function hinglish.
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    char ch;

    // Open the file in binary read mode
    fptr = fopen("file1.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move the file pointer to the 10th byte from the beginning
    fseek(fptr, 10, SEEK_SET);

    // Read and print the character at this position
    ch = fgetc(fptr);
    printf("Character at 10th byte: %c\n", ch);

    // Move the file pointer 5 bytes forward from the current position
    fseek(fptr, 5, SEEK_CUR);

    // Read and print the character at this new position
    ch = fgetc(fptr);
    printf("Character after moving 5 bytes forward: %c\n", ch);

    // Move the file pointer to 5 bytes before the end of the file
    fseek(fptr, -5, SEEK_END);

    // Read and print the character at this position
    ch = fgetc(fptr);
    printf("Character 5 bytes before end: %c\n", ch);

    // Close the file
    fclose(fptr);
    return 0;
}
