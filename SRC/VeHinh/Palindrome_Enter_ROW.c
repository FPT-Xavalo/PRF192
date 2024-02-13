#include <stdio.h>

void palindrome_triangle(int row) {
	int i,j,k;
    for ( i = 1; i <= row; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for ( k = i-1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
}

int main() {
    int row;
    printf("Enter the number of rows for the palindrome triangle pattern (row > 0): ");
    scanf("%d", &row);
    palindrome_triangle(row);
    return 0;
}
