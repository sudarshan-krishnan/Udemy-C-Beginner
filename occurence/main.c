// Find occurence of a number in a list of numbers

#include <stdio.h>

void findOccurrences(int arr[], int size) {
    // Create a separate array to store the count of occurrences for each number
    int count[size];
    
    // Initialize count array with zeros
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    // Iterate through the array and count occurrences
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }
    
    // Display the occurrences for each number
    printf("Number\tOccurrences\n");
    for (int i = 0; i < size; i++) {
        if (count[i] > 0) {
            printf("%d\t%d\n", i, count[i]);
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findOccurrences(arr, size);

    return 0;
}
