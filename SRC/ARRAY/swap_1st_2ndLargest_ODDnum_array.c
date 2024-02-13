//Your program allows the user to enter an integer array of 'n' elements from the keyboard. 
//The program swaps the places of the first largest and smallest odd numbers with each other.


#include <stdio.h>
void swap(int *a, int *b) 
{
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements of the array:\n", n);
int i;
for ( i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int min_odd = -1, max_odd = -1;
for ( i = 0; i < n; i++) {
if (arr[i] % 2 != 0) {
if (min_odd == -1 || arr[i] < arr[min_odd]) {
min_odd = i;
}
if (max_odd == -1 || arr[i] > arr[max_odd]) {
max_odd = i;
}
}
}
if (min_odd != -1 && max_odd != -1) {
swap(&arr[min_odd], &arr[max_odd]);
}
printf("The modified array is:\n");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
