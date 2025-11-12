// Write a program to create two files with names EvenFile and OddFile. Input 
// 20 numbers from the user and save even numbers in EvenFile and odd numbers 
// in OddFile. 
#include <stdio.h>
int main() {
    FILE *evenFile, *oddFile;
    int number;

    // Open files for writing
    evenFile = fopen("EvenFile.txt", "w");
    oddFile = fopen("OddFile.txt", "w");

    if(evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Input 20 numbers from the user
    for(int i = 0; i < 20; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        // Check if the number is even or odd and write to respective file
        if(number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    // Close the files
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been saved to EvenFile.txt and OddFile.txt\n");
    return 0;
}