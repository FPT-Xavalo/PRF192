#include <stdio.h>

int sum_of_divisors(int arr[], int n, int x) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (x % arr[i] == 0) {
            sum += arr[i];
        }
    }
    
    return sum;
}

int main() {
    int arr[100], n, x;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    int result = sum_of_divisors(arr, n, x);
    
    printf("The sum of elements that are divisors of x is %d\n", result);
    
    return 0;
}
