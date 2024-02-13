#include <stdio.h>

// function to print half pyramid pattern
void printHalfPyramid(int rows) {
    int i, j;
    
    // iterate over each row
    for(i = 1; i <= rows; i++) {
        // print spaces before the stars
        for(j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        
        // print stars for current row
        for(j = 1; j <= i; j++) {
            printf("%d",j);
        }
        
        // move to next line
        printf("\n");
    }
}

int main() {
    int rows;
    
    // prompt user to enter number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // call function to print half pyramid pattern
    printHalfPyramid(rows);
    
    return 0;
}

