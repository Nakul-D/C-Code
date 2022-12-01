// Largest and the second largest numbers in an array

#include <stdio.h>

void main() {

    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);
        arr[i] = input;
    }
    
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    int second_largest = smallest;

    for (int i = 0; i < n; i++) {
        if (arr[i] == largest) {
            continue;
        } else {
            if (arr[i] > second_largest) {
                second_largest = arr[i];
            }
        }
    }
    printf("Largest: %d\n", largest);
    printf("Second largest: %d\n", second_largest);
    printf("Smallest: %d\n", smallest);
}
