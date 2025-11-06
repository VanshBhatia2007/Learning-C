// wap to search an element in an array
#include <stdio.h>

int main() {
    int n, i, search, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (numbers[i] == search) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}
