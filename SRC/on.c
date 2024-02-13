//Sum = 1/x + 1/x^2 + 1/x^3 +... + 1/x^n
#include <stdio.h>

int main()
{
    int i, j, n, temp = 0;
    printf("Enter number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Please enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) // ( > ascending) ( < descending) 
            {
                // swap them 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The even numbers in ascending order are:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0) 
        {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n");
    
    printf("The odd numbers in ascending order are:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1) 
        {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n");

    return 0;
}

