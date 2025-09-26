// Write a program that asks the user to enter a 
// password and keeps asking until the correct password 
// is entered (do-while)
#include <stdio.h>
#include <string.h>
int main() {
    char password[20];
    const char correctPassword[] = "secure123";
    
    do {
        printf("Enter the password: ");
        scanf("%19s", password);
        if(strcmp(password, correctPassword) != 0) {
            printf("Incorrect password. Try again.\n");
        }
    } while(strcmp(password, correctPassword) != 0);

    printf("Access granted.\n");
    return 0;
}
