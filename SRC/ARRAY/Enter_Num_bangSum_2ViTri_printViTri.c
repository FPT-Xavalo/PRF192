//Your program allows the user to enter an integer array of 'n' elements
//The system finds the index of the first pair with a given sum in the collection. 
//A newline character n' exists between any two printed indexes


#include <stdio.h>

void find_pair_with_sum(int arr[], int n, int target_sum) {
    int i,j,found = 0;
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target_sum) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (!found) {
        printf("No pair with the given sum found.\n");
    }
}

int main() {
    int n,i, target_sum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);
    
    find_pair_with_sum(arr, n, target_sum);
    
    return 0;
}


