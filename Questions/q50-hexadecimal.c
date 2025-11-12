// 50. Write a program to convert a hexadecimal number into a binary number. 
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_HEX_LENGTH 20
#define MAX_BIN_LENGTH (MAX_HEX_LENGTH * 4 + 1)
int hexCharToDecimal(char hex) {
    if(hex >= '0' && hex <= '9') {
        return hex - '0';
    } else if(hex >= 'A' && hex <= 'F') {
        return hex - 'A' + 10;
    } else if(hex >= 'a' && hex <= 'f') {
        return hex - 'a' + 10;
    }
    return -1; // Invalid hex character
} 
void hexToBinary(const char hex[], char bin[]) {
    int len = strlen(hex);
    bin[0] = '\0'; // Initialize binary string
    for(int i = 0; i < len; i++) {
        int decimalValue = hexCharToDecimal(hex[i]);
        if(decimalValue == -1) {
            printf("Invalid hexadecimal number.\n");
            bin[0] = '\0';
            return;
        }
        for(int j = 3; j >= 0; j--) {
            strcat(bin, (decimalValue & (1 << j)) ? "1" : "0");
        }
    }
}
int main() {
    char hex[MAX_HEX_LENGTH];
    char bin[MAX_BIN_LENGTH];
    
    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    
    // Convert to binary
    hexToBinary(hex, bin);
    
    // Display binary number
    if(bin[0] != '\0') {
        printf("Binary equivalent: %s\n", bin);
    }
    
    return 0;
}