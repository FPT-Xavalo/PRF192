/*Your program allows users to enter an array of 'n' integer numbers, where the user enters in (0 <n</ 10). 
Then the user enters an integer number which is the position of an element to remove from the array (0 <pen)
*/

#include <stdio.h>

int main() {
    int n, p, i, j;
    int arr[10];

    // Read the size of the array
    printf("Enter the size of the array (0 < n <= 10): ");
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the position of the element to be removed
    printf("Enter the position of the element to remove (0 < p <= %d): ", n);
    scanf("%d", &p);

    // Remove the element at the given position
    for (i = p-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    // Print the updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



