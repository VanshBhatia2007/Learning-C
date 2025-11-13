// WAP to perform I/O and make use of file positioning functions on Binary 
// files. (using fseek, ftell, rewind functions) 
#include <stdio.h>
#include <stdlib.h>
struct Record {
    int id;
    char name[20];
    float score;
};
void writeRecords(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if(file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    struct Record records[3] = {
        {1, "Alice", 85.5},
        {2, "Bob", 90.0},
        {3, "Charlie", 78.0}
    };
    fwrite(records, sizeof(struct Record), 3, file);
    fclose(file);
}
void readRecords(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if(file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    struct Record record;
    // Read the second record
    fseek(file, sizeof(struct Record), SEEK_SET);
    fread(&record, sizeof(struct Record), 1, file);
    printf("Second Record - ID: %d, Name: %s, Score: %.2f\n", record.id, record.name, record.score);
    // Get current position
    long pos = ftell(file);
    printf("Current file position: %ld\n", pos);
    // Rewind to the beginning
    rewind(file);
    // Read all records
    printf("All Records:\n");
    while(fread(&record, sizeof(struct Record), 1, file) == 1) {
        printf("ID: %d, Name: %s, Score: %.2f\n", record.id, record.name, record.score);
    }
    fclose(file);
}
int main() {
    const char *filename = "records.bin";
    writeRecords(filename);
    readRecords(filename);
    return 0;
}