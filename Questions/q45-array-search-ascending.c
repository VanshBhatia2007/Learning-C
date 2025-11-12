//  Write a program to search for a number entered by the user in a given array and display the array in ascending order.
#include <stdio.h>
#define SIZE 10
void sortArray(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[SIZE] = {34, 7, 23, 32, 5, 62, 32, 14, 8, 19};
    int number, found = 0;

    // Input number to search
    printf("Enter a number to search: ");
    scanf("%d", &number);

    // Search for the number in the array
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] == number) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Number %d found in the array.\n", number);
    } else {
        printf("Number %d not found in the array.\n", number);
    }

    // Sort the array in ascending order
    sortArray(arr, SIZE);

    // Display the sorted array
    printf("Array in ascending order: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}