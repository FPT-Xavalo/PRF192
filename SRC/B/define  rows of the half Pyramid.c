/*Users are required to enter an integer number to define "rows" of the half Pyramid pattern (row>0)

Program prints out the half Pyramid of number.
*/
#include <stdio.h>

int main() {
    int rows, i, j;

  //  printf("Enter the number of rows for the half pyramid pattern: ");
    scanf("%d", &rows);
    printf("\n");
    printf("OUTPUT:\n");
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

