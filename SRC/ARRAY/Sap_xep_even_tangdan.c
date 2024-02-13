#include <stdio.h>

void sortEven(int arr[], int n) {
    int temp, i, j;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[j] % 2 == 0 && arr[j] < arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main() {
	int i;
    int arr[] = {9, 3, 7, 8, 2, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortEven(arr, n);
    printf("Sorted array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

