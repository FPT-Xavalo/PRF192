#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int count_primes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num_primes = count_primes(arr, n);
    printf("The number of primes in the array is %d\n", num_primes);

    return 0;
}

